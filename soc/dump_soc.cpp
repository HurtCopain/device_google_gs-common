/*
 * Copyright 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <dump/pixel_dump.h>

// Dump chip ID.
int main() {
    dumpFileContent("AP HW TUNE", "/sys/devices/system/chip-id/ap_hw_tune_str");
    dumpFileContent("EVT VERSION", "/sys/devices/system/chip-id/evt_ver");
    dumpFileContent("LOT ID", "/sys/devices/system/chip-id/lot_id");
    dumpFileContent("PRODUCT ID", "/sys/devices/system/chip-id/product_id");
    dumpFileContent("REVISION", "/sys/devices/system/chip-id/revision");
    dumpFileContent("RAW STR", "/sys/devices/system/chip-id/raw_str");
    return 0;
}
