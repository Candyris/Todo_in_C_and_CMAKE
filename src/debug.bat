cd ..
mkdir build 
cd build
cmake ..
cmake --build .
cd ..
:: cls && echo -------------{Running Application}---------- &&.\build\Debug\todo.exe cache\task.txt && cd src