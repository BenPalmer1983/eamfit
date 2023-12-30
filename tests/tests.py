#
#

import os
import subprocess





class Tests:

    
    def run(self):
    
        self.topdir = os.getcwd()
        self.bindir = os.path.join(self.topdir, "bin")
        self.wd = os.path.join(self.topdir, "wd")
        Tests.mkdir(self.wd)
        
        self.get_test_exec()
        
        os.chdir(self.wd)
        for i in range(len(self.test_bins)):
            test_bin = self.test_bins[i]
            subprocess.run(test_bin)
    
    
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


