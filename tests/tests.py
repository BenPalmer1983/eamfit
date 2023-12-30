#
#

import os
import subprocess
import csv




class Tests:

    
    def run(self):
    
        self.topdir = os.getcwd()
        self.bindir = os.path.join(self.topdir, "bin")
        self.wd = os.path.join(self.topdir, "wd")
        Tests.mkdir(self.wd)
        
        self.get_test_exec()
        
        passed = True
        
        os.chdir(self.wd)
        for i in range(len(self.test_bins)):
            test_bin = self.test_bins[i]
            subprocess.run(test_bin)
            
            with open(self.log_files[i], mode='r') as fh:
                log_file = csv.reader(fh)
                for line in log_file:
                    passed = passed and (line[0] == "1")
                    
        print()
        print("##########################################")
        print("Overall Result:")
        if(passed):
            print("PASSED")
        else:
            print("FAILED")
        print("##########################################")
    
    
    def get_test_exec(self):
        self.test_bins = []
        self.log_files = []
        file_list = os.listdir(self.bindir)
        
        for file_name in file_list:
            if(file_name[-7:] == "units.x"):
            	file_path = os.path.join(self.bindir, file_name);
            	if(os.path.isfile(file_path)):
                    self.test_bins.append(file_path)
                    self.log_files.append(file_name.replace(".x", ".log"))
                    print(file_path)

    @staticmethod
    def mkdir(path):
        try:
            os.mkdir(path)
        except:
            pass
    

if(__name__ == "__main__"):
    full_test = Tests()
    full_test.run()


