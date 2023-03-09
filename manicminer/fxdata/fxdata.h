#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.15 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xffe4;
constexpr uint24_t FX_DATA_BYTES = 7152;

constexpr uint24_t tiles = 0x000000;
constexpr uint16_t tilesWidth  = 8;
constexpr uint16_t tilesHeight = 8;
constexpr uint8_t  tilesFrames = 131;

constexpr uint24_t portals = 0x00041C;
constexpr uint16_t portalsWidth  = 16;
constexpr uint16_t portalsHeight = 16;
constexpr uint8_t  portalsFrames = 20;

constexpr uint24_t player_gfx = 0x0006A0;
constexpr uint16_t player_gfx_width  = 16;
constexpr uint16_t player_gfx_height = 16;
constexpr uint8_t  player_gfx_frames = 8;

constexpr uint24_t guardians_h_gfx = 0x0007A4;
constexpr uint16_t guardians_h_gfx_width  = 16;
constexpr uint16_t guardians_h_gfx_height = 16;
constexpr uint8_t  guardians_h_gfx_frames = 130;

constexpr uint24_t tilemap = 0x0017E8;
constexpr uint24_t Level_1 = 0x0017F0;
constexpr uint24_t Level_2 = 0x0019F0;
