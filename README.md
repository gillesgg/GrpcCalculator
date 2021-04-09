# GrpcCalculator sample - VS 2019
How to Build
- .\vcpkg.exe install grpc:x64-windows
- .\vcpkg.exe install protobuf protobuf:x64-windows 
- .\vcpkg.exe install protobuf[zlib] protobuf[zlib]:x64-windows
- .\vcpkg.exe export grpc:x64-windows protobuf:x64-windows  --nuget  --nuget-id=grpc_x64_3_14 --nuget-version=3.14.0
- Start Visual Studio 2019
- Open the solution
- from the Package Manager Console type:
- Install-Package grpc_x64_3_14 -Source "vcpkg folder"
