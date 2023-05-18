# C++ web 框架

## Oat++

https://oatpp.io/  
https://github.com/oatpp/oatpp (pp -> plus plus)

# C++ web 框架

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
