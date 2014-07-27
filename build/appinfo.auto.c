#include "pebble_app_info.h"
#include "src/resource_ids.auto.h"

const PebbleAppInfo __pbl_app_info __attribute__ ((section (".pbl_header"))) = {
  .header = "PBLAPP",
  .struct_version = { APP_INFO_CURRENT_STRUCT_VERSION_MAJOR, APP_INFO_CURRENT_STRUCT_VERSION_MINOR },
  .sdk_version = { APP_INFO_CURRENT_SDK_VERSION_MAJOR, APP_INFO_CURRENT_SDK_VERSION_MINOR },
  .app_version = { 1, 0 },
  .load_size = 0xb6b6,
  .offset = 0xb6b6b6b6,
  .crc = 0xb6b6b6b6,
  .name = "pebble-pokedex",
  .company = "kevin.b.tu@gmail.com",
  .icon_resource_id = RESOURCE_ID_IMAGES_POKEBALL_PNG,
  .sym_table_addr = 0xA7A7A7A7,
  .flags = 0,
  .num_reloc_entries = 0xdeadcafe,
  .uuid = { 0x26, 0x96, 0x25, 0xDB, 0x68, 0x22, 0x48, 0xDD, 0x96, 0x29, 0x56, 0x55, 0x94, 0x3D, 0x66, 0xCF },
  .virtual_size = 0xb6b6
};
