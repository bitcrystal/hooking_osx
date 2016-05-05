#!/bin/bash
cd ./task_vaccine
rake test
rake build # will build an x86_64 dynamic library and place it into ./build/x86_64