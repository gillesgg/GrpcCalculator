@echo off

echo Generating API files...


set path=%path%;e:\DEV\DEV.SE\Service\vcpkg\installed\x64-windows\tools\protobuf

protoc -I=. --cpp_out=. arithmetics.proto 
protoc -I=. --grpc_out=. --plugin=protoc-gen-grpc="e:\DEV\DEV.SE\Service\vcpkg\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe" arithmetics.proto