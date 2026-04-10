#pragma once

#include "activities/Activity.h"
#include "util/ButtonNavigator.h"

/**
 * Submenu for OPDS Browser settings.
 * Shows OPDS Server URL and HTTP authentication options.
 */
class OpdsSettingsActivity final : public Activity {
 public:
  explicit OpdsSettingsActivity(GfxRenderer& renderer, MappedInputManager& mappedInput)
      : Activity("OpdsSettings", renderer, mappedInput) {}

  void onEnter() override;
  void onExit() override;
  void loop() override;
  void render(RenderLock&&) override;

 private:
  ButtonNavigator buttonNavigator;

  size_t selectedIndex = 0;
  void handleSelection();
};
