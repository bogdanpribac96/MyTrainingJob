import sys

import shutil

import os

import subprocess

import re

from pathlib import *

from hashlib import *


#---------------------------------------- Config ----------------------------------------#

CompilerPath = r'C:/MinGW/bin/mingw32-make.exe'
CompilerIncludes = r'C:/MinGW/'
ProjectPath = Path.cwd()
BuildOutputDir = ProjectPath / 'Build' / 'Object'
BinaryDir = ProjectPath / 'Build'

CompilerFlags = [
    '-G',
    '\"MinGW Makefiles\"',
    '-DCMAKE_C_COMPILER=gcc',
    '-DCMAKE_CXX_COMPILER=g++',
    '-O'
]

CompilerString = 'cmake '+' '.join(CompilerFlags) + ' ' + str(ProjectPath) + ' -B'+ str(BinaryDir)

def PowerShellComand(command):
    p = subprocess.Popen(['powershell.exe',command],stdout = sys.stdout)
    p.communicate()
    return p.returncode

errorCompiler = PowerShellComand(CompilerString)


print(errorCompiler)

errorCompiler = PowerShellComand("cmake --build " + str(BinaryDir))

print(errorCompiler)




#cmake -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -S . -B build