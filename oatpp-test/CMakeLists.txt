cmake_minimum_required(VERSION 3.7.2)
 
project(SimpleServer)
 
set(CMAKE_CXX_STANDARD 11)
 
# include_directories表示引入头文件搜索路径，当工程要用到某个头文件的时候，就会去该路径下搜索。一般都是在顶层的CmakeList文件中添加搜索路径。
include_directories("/usr/local/include/oatpp-1.3.0/oatpp/")
# 表示链接的时候的搜索路径
link_directories("/usr/local/lib64/oatpp-1.3.0/")

add_executable(simple-server main.cpp)
 
target_link_libraries(simple-server
    pthread
    oatpp
)