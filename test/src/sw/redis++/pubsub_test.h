/**************************************************************************
   Copyright (c) 2017 sewenew

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 *************************************************************************/

#ifndef SEWENEW_REDISPLUSPLUS_TEST_SUBPUB_TEST_H
#define SEWENEW_REDISPLUSPLUS_TEST_SUBPUB_TEST_H

#include <sw/redis++/redis++.h>

namespace sw {

namespace redis {

namespace test {

class PubSubTest {
public:
    PubSubTest(const ConnectionOptions &opts, const ConnectionOptions &cluster_opts);

    void run();

private:
    template <typename RedisType>
    void _test_sub_channel(RedisType &redis);

    template <typename RedisType>
    void _test_sub_pattern(RedisType &redis);

    template <typename RedisType>
    void _test_unsubscribe(RedisType &redis);

    Redis _redis;

    RedisCluster _cluster;
};

}

}

}

#endif // end SEWENEW_REDISPLUSPLUS_TEST_SUBPUB_TEST_H
