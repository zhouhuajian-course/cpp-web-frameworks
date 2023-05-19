# C++ web 框架

## Drogon

https://github.com/drogonframework/drogon  
https://github.com/drogonframework/drogon/wiki

**简单使用**

```shell
# 创建项目脚手架
$ drogon_ctl create project drogon-test
drogon_ctl: error while loading shared libraries: libjsoncpp.so.25: cannot open shared object file: No such file or directory
$ find / -name "libjsoncpp.so*"
/usr/local/lib64/libjsoncpp.so.1.9.5
/usr/local/lib64/libjsoncpp.so.25
/usr/local/lib64/libjsoncpp.so
/opt/jsoncpp-master/build/lib/libjsoncpp.so.1.9.5
/opt/jsoncpp-master/build/lib/libjsoncpp.so.25
/opt/jsoncpp-master/build/lib/libjsoncpp.so
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib64/
$ drogon_ctl create project drogon-test
create a project named drogon-test
$ cd drogon-test/
$ ls
build  CMakeLists.txt  config.json  controllers  filters  main.cc  models  plugins  test  views
# 编译 运行
$ cd build
$ cmake ..
$ make
$ ./drogon-test
# 另一个会话
$ echo '<h1>Hello Drogon!</h1>' >> index.html
$ curl -X GET localhost/
<h1>Hello Drogon!</h1>
# 默认根目录是 ./ 
# The default root path is "./", but could also be modified by config.json. See Configuration File for more details. Then you can visit this page by URL "http://localhost" or"http://localhost/index.html" (or the IP of the server where your wepapp is running).
# https://github.com/drogonframework/drogon/wiki/ENG-03-Quick-Start
```

**安装**

```shell
# 依赖
# 安装 jsoncpp
git clone https://github.com/open-source-parsers/jsoncpp (下载zip，解压)
cd jsoncpp/
mkdir build
cd build
cmake ..
make && make install
# 安装 uuid
yum install libuuid-devel
# 安装
git clone https://github.com/drogonframework/drogon (下载zip，解压)
cd drogon
# 准备 trantor 这个是另外一个库 github上 点击能到另外一个库 下载zip 解压 并 拷贝到 trantor 目录里面
# https://github.com/an-tao/trantor/tree/523a38865082d5d18bce0c6b9af593a5b27e1d49
git submodule update --init （貌似不用）
mkdir build
cd build
cmake ..
make && sudo make install
# 或者直接运行 ./build.sh 更方便
# 安装好后，文件位置
Install the project...
-- Install configuration: "release"
-- Installing: /usr/local/lib64/libdrogon.a
-- Installing: /usr/local/include/drogon/Attribute.h
-- Installing: /usr/local/include/drogon/CacheMap.h
-- Installing: /usr/local/include/drogon/Cookie.h
-- Installing: /usr/local/include/drogon/DrClassMap.h
-- Installing: /usr/local/include/drogon/DrObject.h
-- Installing: /usr/local/include/drogon/DrTemplate.h
-- Installing: /usr/local/include/drogon/DrTemplateBase.h
-- Installing: /usr/local/include/drogon/HttpAppFramework.h
-- Installing: /usr/local/include/drogon/HttpBinder.h
-- Installing: /usr/local/include/drogon/HttpClient.h
-- Installing: /usr/local/include/drogon/HttpController.h
-- Installing: /usr/local/include/drogon/HttpFilter.h
-- Installing: /usr/local/include/drogon/HttpRequest.h
-- Installing: /usr/local/include/drogon/HttpResponse.h
-- Installing: /usr/local/include/drogon/HttpSimpleController.h
-- Installing: /usr/local/include/drogon/HttpTypes.h
-- Installing: /usr/local/include/drogon/HttpViewData.h
-- Installing: /usr/local/include/drogon/IntranetIpFilter.h
-- Installing: /usr/local/include/drogon/IOThreadStorage.h
-- Installing: /usr/local/include/drogon/LocalHostFilter.h
-- Installing: /usr/local/include/drogon/MultiPart.h
-- Installing: /usr/local/include/drogon/NotFound.h
-- Installing: /usr/local/include/drogon/Session.h
-- Installing: /usr/local/include/drogon/UploadFile.h
-- Installing: /usr/local/include/drogon/WebSocketClient.h
-- Installing: /usr/local/include/drogon/WebSocketConnection.h
-- Installing: /usr/local/include/drogon/WebSocketController.h
-- Installing: /usr/local/include/drogon/drogon.h
-- Installing: /usr/local/include/drogon/version.h
-- Installing: /usr/local/include/drogon/drogon_callbacks.h
-- Installing: /usr/local/include/drogon/PubSubService.h
-- Installing: /usr/local/include/drogon/drogon_test.h
-- Installing: /usr/local/include/drogon/RateLimiter.h
-- Installing: /usr/local/include/drogon/exports.h
-- Installing: /usr/local/include/drogon/orm/ArrayParser.h
-- Installing: /usr/local/include/drogon/orm/Criteria.h
-- Installing: /usr/local/include/drogon/orm/DbClient.h
-- Installing: /usr/local/include/drogon/orm/DbListener.h
-- Installing: /usr/local/include/drogon/orm/DbTypes.h
-- Installing: /usr/local/include/drogon/orm/Exception.h
-- Installing: /usr/local/include/drogon/orm/Field.h
-- Installing: /usr/local/include/drogon/orm/FunctionTraits.h
-- Installing: /usr/local/include/drogon/orm/Mapper.h
-- Installing: /usr/local/include/drogon/orm/CoroMapper.h
-- Installing: /usr/local/include/drogon/orm/Result.h
-- Installing: /usr/local/include/drogon/orm/ResultIterator.h
-- Installing: /usr/local/include/drogon/orm/Row.h
-- Installing: /usr/local/include/drogon/orm/RowIterator.h
-- Installing: /usr/local/include/drogon/orm/SqlBinder.h
-- Installing: /usr/local/include/drogon/orm/RestfulController.h
-- Installing: /usr/local/include/drogon/nosql/RedisClient.h
-- Installing: /usr/local/include/drogon/nosql/RedisResult.h
-- Installing: /usr/local/include/drogon/nosql/RedisSubscriber.h
-- Installing: /usr/local/include/drogon/nosql/RedisException.h
-- Installing: /usr/local/include/drogon/utils/any.h
-- Installing: /usr/local/include/drogon/utils/apply.h
-- Installing: /usr/local/include/drogon/utils/coroutine.h
-- Installing: /usr/local/include/drogon/utils/FunctionTraits.h
-- Installing: /usr/local/include/drogon/utils/HttpConstraint.h
-- Installing: /usr/local/include/drogon/utils/optional.h
-- Installing: /usr/local/include/drogon/utils/OStringStream.h
-- Installing: /usr/local/include/drogon/utils/string_view.h
-- Installing: /usr/local/include/drogon/utils/Utilities.h
-- Installing: /usr/local/include/drogon/plugins/Plugin.h
-- Installing: /usr/local/include/drogon/plugins/SecureSSLRedirector.h
-- Installing: /usr/local/include/drogon/plugins/AccessLogger.h
-- Installing: /usr/local/include/drogon/plugins/RealIpResolver.h
-- Installing: /usr/local/include/drogon/plugins/Hodor.h
-- Installing: /usr/local/include/drogon/plugins/GlobalFilters.h
-- Installing: /usr/local/lib64/cmake/Drogon/DrogonConfig.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/DrogonConfigVersion.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindUUID.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindJsoncpp.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindSQLite3.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindMySQL.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/Findpg.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindBrotli.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/Findcoz-profiler.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindHiredis.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/FindFilesystem.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/DrogonUtilities.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/ParseAndAddDrogonTests.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/DrogonTargets.cmake
-- Installing: /usr/local/lib64/cmake/Drogon/DrogonTargets-release.cmake
-- Installing: /usr/local/lib64/libtrantor.a
-- Installing: /usr/local/include/trantor/exports.h
-- Installing: /usr/local/include/trantor/net/EventLoop.h
-- Installing: /usr/local/include/trantor/net/EventLoopThread.h
-- Installing: /usr/local/include/trantor/net/EventLoopThreadPool.h
-- Installing: /usr/local/include/trantor/net/InetAddress.h
-- Installing: /usr/local/include/trantor/net/TcpClient.h
-- Installing: /usr/local/include/trantor/net/TcpConnection.h
-- Installing: /usr/local/include/trantor/net/TcpServer.h
-- Installing: /usr/local/include/trantor/net/callbacks.h
-- Installing: /usr/local/include/trantor/net/Resolver.h
-- Installing: /usr/local/include/trantor/net/Channel.h
-- Installing: /usr/local/include/trantor/net/Certificate.h
-- Installing: /usr/local/include/trantor/net/TLSPolicy.h
-- Installing: /usr/local/include/trantor/utils/AsyncFileLogger.h
-- Installing: /usr/local/include/trantor/utils/ConcurrentTaskQueue.h
-- Installing: /usr/local/include/trantor/utils/Date.h
-- Installing: /usr/local/include/trantor/utils/Funcs.h
-- Installing: /usr/local/include/trantor/utils/LockFreeQueue.h
-- Installing: /usr/local/include/trantor/utils/LogStream.h
-- Installing: /usr/local/include/trantor/utils/Logger.h
-- Installing: /usr/local/include/trantor/utils/MsgBuffer.h
-- Installing: /usr/local/include/trantor/utils/NonCopyable.h
-- Installing: /usr/local/include/trantor/utils/ObjectPool.h
-- Installing: /usr/local/include/trantor/utils/SerialTaskQueue.h
-- Installing: /usr/local/include/trantor/utils/TaskQueue.h
-- Installing: /usr/local/include/trantor/utils/TimingWheel.h
-- Installing: /usr/local/include/trantor/utils/Utilities.h
-- Installing: /usr/local/lib64/cmake/Trantor/TrantorConfig.cmake
-- Installing: /usr/local/lib64/cmake/Trantor/TrantorConfigVersion.cmake
-- Installing: /usr/local/lib64/cmake/Trantor/Findc-ares.cmake
-- Installing: /usr/local/lib64/cmake/Trantor/FindBotan.cmake
-- Installing: /usr/local/lib64/cmake/Trantor/TrantorTargets.cmake
-- Installing: /usr/local/lib64/cmake/Trantor/TrantorTargets-release.cmake
-- Installing: /usr/local/bin/drogon_ctl
-- Set runtime path of "/usr/local/bin/drogon_ctl" to ""
-- Installing: /usr/local/bin/dg_ctl
```

**名字由来**

Drogon is a C++14/17-based HTTP application framework. Drogon can be used to easily build various types of web application server programs using C++. Drogon is the name of a dragon in the American TV series "Game of Thrones" that I really like.

## Oat++

https://oatpp.io/  
https://github.com/oatpp/oatpp (pp -> plus plus)

**简单使用**

```shell
# oatpp-test
$ cd oatpp-test
$ ./run.sh 
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /cpp-web-frameworks/oatpp-test/build
[100%] Built target simple-server
 I |2023-05-18 17:07:39 1684400859864378| MyApp:Server running on port 8000

# 另一个会话
$ curl -X GET 'localhost:8000/hello'
Hello, World!
```

浏览器访问 192.168.1.206:8080/hello

编译/链接时问题解决，找不到头文件，找不到库文件

```shell
# include_directories表示引入头文件搜索路径，当工程要用到某个头文件的时候，就会去该路径下搜索。一般都是在顶层的CmakeList文件中添加搜索路径。
include_directories("/usr/local/include/oatpp-1.3.0/oatpp/")
# 表示链接的时候的搜索路径
link_directories("/usr/local/lib64/oatpp-1.3.0/")
```

**安装**

```shell
# 依赖
$ yum -y install libatomic
# 安装11
$ git clone https://github.com/oatpp/oatpp.git (内容太多，可直接github下载zip)
$ cd oatpp/
$ mkdir build && cd build
$ cmake ..
$ make install
# 异常处理
/opt/rh/devtoolset-11/root/usr/libexec/gcc/x86_64-redhat-linux/11/ld: cannot find -latomic
$ find / -name "libatomic.so*"
/usr/lib/gcc/x86_64-redhat-linux/4.8.2/32/libatomic.so
/usr/lib/gcc/x86_64-redhat-linux/4.8.2/libatomic.so
/usr/lib64/libatomic.so.1
/usr/lib64/libatomic.so.1.0.0
$  cd /usr/lib64/
$ cp libatomic.so.1 libatomic.so
# 安装结果
$  make install
Install the project...
-- Install configuration: ""
-- Installing: /usr/local/lib64/oatpp-1.3.0/liboatpp.a
-- Installing: /usr/local/lib64/oatpp-1.3.0/liboatpp-test.a
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/algorithm
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/algorithm/CRC.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/ApiClient_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/ApiClient_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/ApiController_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/ApiController_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/DTO_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/DTO_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/DbClient_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/DbClient_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/auth_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/auth_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/base_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/base_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/bundle_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/bundle_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/cors_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/api_controller/cors_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/dto
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/dto/base_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/dto/base_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/dto/enum_define.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/codegen/dto/enum_undef.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/IODefinitions.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/Types.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/ConditionVariable.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/Coroutine.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/CoroutineWaitList.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/Error.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/Executor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/Lock.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/Processor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/utils
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/utils/FastQueue.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/worker
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/worker/IOEventWorker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/worker/IOWorker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/worker/TimerWorker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/async/worker/Worker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/base
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/base/CommandLineArguments.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/base/Config.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/base/Countable.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/base/Environment.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/base/ObjectHandle.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/concurrency
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/concurrency/SpinLock.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/concurrency/Thread.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/Bundle.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/buffer
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/buffer/FIFOBuffer.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/buffer/IOBuffer.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/buffer/Processor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/ObjectMapper.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/TypeResolver.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Any.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Collection.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Enum.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/List.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Map.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Object.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/PairList.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Primitive.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Type.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/UnorderedMap.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/UnorderedSet.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/mapping/type/Vector.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/resource
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/resource/File.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/resource/InMemoryData.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/resource/Resource.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/resource/TemporaryFile.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/share
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/share/LazyStringMap.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/share/MemoryLabel.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/share/StringTemplate.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/stream
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/stream/BufferStream.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/stream/FIFOStream.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/stream/FileStream.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/stream/Stream.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/data/stream/StreamBufferedProxy.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/macro
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/macro/basic.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/macro/codegen.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/macro/component.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/parser
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/parser/Caret.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/parser/ParsingError.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/provider
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/provider/Invalidator.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/provider/Pool.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/provider/Provider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/utils
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/utils/Binary.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/utils/ConversionUtils.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/utils/Random.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/core/utils/String.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/encoding
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/encoding/Base64.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/encoding/Hex.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/encoding/Unicode.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/encoding/Url.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/Address.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/ConnectionHandler.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/ConnectionPool.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/ConnectionProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/ConnectionProviderSwitch.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/Server.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/Url.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/monitor
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/monitor/ConnectionInactivityChecker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/monitor/ConnectionMaxAgeChecker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/monitor/ConnectionMonitor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/monitor/MetricsChecker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/monitor/StatCollector.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/tcp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/tcp/Connection.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/tcp/client
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/tcp/client/ConnectionProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/tcp/server
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/tcp/server/ConnectionProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/Interface.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/Pipe.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/Socket.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/client
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/client/ConnectionProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/server
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/network/virtual_/server/ConnectionProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm/Connection.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm/DbClient.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm/Executor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm/QueryResult.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm/SchemaMigration.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/orm/Transaction.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json/Beautifier.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json/Utils.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json/mapping
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json/mapping/Deserializer.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json/mapping/ObjectMapper.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/parser/json/mapping/Serializer.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/client
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/client/ApiClient.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/client/HttpRequestExecutor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/client/RequestExecutor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/client/RetryPolicy.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/FileProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/InMemoryDataProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/Multipart.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/Part.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/PartList.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/PartReader.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/Reader.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/StatefulParser.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/mime/multipart/TemporaryFileProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/CommunicationError.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/Http.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/encoding
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/encoding/Chunked.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/encoding/EncoderProvider.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/encoding/ProviderCollection.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming/BodyDecoder.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming/Request.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming/RequestHeadersReader.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming/Response.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming/ResponseHeadersReader.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/incoming/SimpleBodyDecoder.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/Body.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/BufferBody.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/MultipartBody.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/Request.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/Response.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/ResponseFactory.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/outgoing/StreamingBody.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/utils
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/protocol/http/utils/CommunicationUtils.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/AsyncHttpConnectionHandler.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/HttpConnectionHandler.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/HttpProcessor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/HttpRequestHandler.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/HttpRouter.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/api
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/api/ApiController.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/api/Endpoint.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/handler
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/handler/AuthorizationHandler.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/handler/ErrorHandler.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/interceptor
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/interceptor/AllowCorsGlobal.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/interceptor/RequestInterceptor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/server/interceptor/ResponseInterceptor.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/url
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/url/mapping
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/url/mapping/Pattern.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp/web/url/mapping/Router.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp-test
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp-test/Checker.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp-test/UnitTest.hpp
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp-test/web
-- Installing: /usr/local/include/oatpp-1.3.0/oatpp/oatpp-test/web/ClientServerTestRunner.hpp
-- Installing: /usr/local/lib64/cmake/oatpp-1.3.0/oatppTargets.cmake
-- Installing: /usr/local/lib64/cmake/oatpp-1.3.0/oatppTargets-noconfig.cmake
-- Installing: /usr/local/lib64/cmake/oatpp-1.3.0/oatppConfig.cmake
-- Installing: /usr/local/lib64/cmake/oatpp-1.3.0/oatppConfigVersion.cmake
```

**名字由来**

```
Q: "Oat++" name?
"Oat" is something light, organic, and green. It can be easily cooked and consumed with no effort.
"++" gives a hint that it is "something" for C++.
```

**名字由来**

```
Q: "Oat++" name?
"Oat" is something light, organic, and green. It can be easily cooked and consumed with no effort.
"++" gives a hint that it is "something" for C++.
```
