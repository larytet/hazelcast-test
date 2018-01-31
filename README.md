cd ..
git clone git@github.com:hazelcast/hazelcast-cpp-client.git
cd hazelcast-cpp-client
mkdir build
cd build
cmake .
make 


sudo apt-get install libboost-all-dev


g++ -Wall test.cpp -o test -I ../hazelcast-cpp-client/hazelcast/include/ -I ../hazelcast-cpp-client/hazelcast/generated-sources/include/ -L ../hazelcast-cpp-client/build -l HazelcastClient3.9.2-SNAPSHOT_64 -l pthread
