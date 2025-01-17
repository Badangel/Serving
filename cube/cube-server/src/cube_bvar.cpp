// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cube/cube_bvar.h"

namespace rec {
namespace mcube {

bvar::IntRecorder g_keys_num;
bvar::Window<bvar::IntRecorder> g_keys_win("keys_per_request_num",
                                           &g_keys_num,
                                           bvar::FLAGS_bvar_dump_interval);

bvar::Adder<uint64_t> g_request_num("request_num");
bvar::Window<bvar::Adder<uint64_t>> g_request_num_minute("request_num_minute",
                                                         &g_request_num,
                                                         60);

bvar::IntRecorder g_data_load_time("data_load_time");

bvar::IntRecorder g_data_size("data_size");

bvar::Adder<uint64_t> g_long_value_num("long_value_num");
bvar::Window<bvar::Adder<uint64_t>> g_long_value_num_minute(
    "long_value_num_minute", &g_long_value_num, 60);

bvar::Adder<uint64_t> g_unfound_key_num("unfound_key_num");
bvar::Window<bvar::Adder<uint64_t>> g_unfound_key_num_minute(
    "unfound_key_num_minute", &g_unfound_key_num, 60);

bvar::Adder<uint64_t> g_total_key_num("total_key_num");
bvar::Window<bvar::Adder<uint64_t>> g_total_key_num_minute(
    "total_key_num_minute", &g_total_key_num, 60);
}  // namespace mcube
}  // namespace rec
