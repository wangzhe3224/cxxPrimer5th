# -*- coding: utf-8 -*-

import os, time

def find_file(rootDir):
    file_list = []
    creatDate = []
    fname = []
    list_dir = os.walk(rootDir)
    for root, dirs, files in list_dir:
        for f in files:
            if (".cpp" in f or ".h" in f):
                # find cpp file and h file in the directory
                fname.append(f)
                file_list.append(os.path.join(root, f))
                # 
                creatDate.append(time.ctime(os.path.getctime(os.path.join(root, f))))
    files = zip(file_list, creatDate, fname)
    
    return files

def add_head(files):
    # add content at the begin of a file.
    
    for f in files:
        ## 
        with open(f[0], 'r') as original:
            data = original.read()
            if '/' != data[0]:
                print '!'
                content = Copyright(f[2], f[1])
                with open(f[0], 'w') as modified:
                    modified.write(content + data)

def Copyright(filename, creatDate):
    '''
    The content of the head.
    '''
    content = "/*\n  " + filename + "\n  \n  " + "Exercise " + filename[2:4]\
              + "." + filename[5:7] + "\n\n  Created by Wang Zhe on " +\
              creatDate + "\n  Copyright (c) 2014 Wang Zhe. All rights reserved."\
              + "\n*/\n"
    
    return content


if __name__ == "__main__":

    files = find_file(os.getcwd() + "/cxxPrimer5th")
    add_head(files)

    print "Done."
