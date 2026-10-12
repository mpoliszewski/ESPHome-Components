#include "component.h"

#include "esphome/core/defines.h"
#include "esphome/core/log.h"

namespace esphome {
namespace wmbus_common {

static const char *TAG = "wmbus_common";

void WMBusCommon::dump_config() {
  ESP_LOGCONFIG(TAG, "wM-Bus Component:");
  ESP_LOGCONFIG(TAG, "  wmbusmeters version: %s", WMBUSMETERS_VERSION);
}

}  // namespace wmbus_common
}  // namespace esphome
