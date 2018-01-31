#include <hazelcast/client/HazelcastAll.h>
#include <iostream>
#include <string>

using namespace hazelcast::client;

int main()
{
  ClientConfig clientConfig;
  Address address( "172.17.0.2", 5701 );
  clientConfig.addAddress( address );

  HazelcastClient hazelcastClient( clientConfig );

  IMap<std::string, std::string> myMap = hazelcastClient.getMap<std::string ,std::string>( "myMap" );
  myMap.put( std::string("1") , std::string("3") );
  boost::shared_ptr<std::string> value = myMap.get( std::string("1") );
  if( value.get() != NULL )
  {
    std::cout << "Got item " << *value << std::endl;
  }

  return 0;
}

