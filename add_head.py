# -*- coding: utf-8 -*-

import os
def find_file(rootDir):
    file_list = []
    list_dir = os.walk(rootDir)
    for root, dirs, files in list_dir:
        for f in files:
            if (".cpp" in f or ".h" in f):
                # find cpp file and h file in the directory
                file_list.append(os.path.join(root, f))
    return file_list

def add_head(files, content):
    # add content at the begin of a file.
    for f in files:
        with open(f, 'r') as original:
            data = original.read()
            print data[1]
            if "/" != data[0]:
                with open(f, 'w') as modified:
                    modified.write(content + data)

if __name__ == "__main__":

    content = "Licience:"
    files = find_file(os.getcwd() + "/test")
    add_head(files, content)
