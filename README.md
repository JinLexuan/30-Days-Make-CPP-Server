# 30-Days-Make-CPP-Server
This repo follows [30dayMakeCppServer](https://github.com/yuesong-feng/30dayMakeCppServer), create a macOS version server.

## Clone and Enter
``` shell
git clone git@github.com:jjjllxx/30-Days-Make-CPP-Server.git
cd 30-Days-Make-CPP-Server
```

For the following steps, please make sure that you are in 30-Days-Make-CPP-Server folder.
## Compile
``` shell
mkdir build && cd build
cmake ..
make -j16
```

## Run Server
``` shell
cd bin
./server
```

## Run Client
Open another terminal
``` shell
cd bin
./client
```
