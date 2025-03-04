// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// This work is free software released under the GNU General Public License
// version 2.0, and comes with ABSOLUTELY NO WARRANTY.
//
// See LICENSE and AUTHORS for more information.

#include "headers.h"

Color_t colors[MAX_COLORS] = {
{Color_White, 255, 255, 255},
{Color_Light_Grey_High, 232, 232, 232},
{Color_Light_Grey_Low, 212, 212, 212},
{Color_Medium_Grey_High, 188, 188, 188},
{Color_Medium_Grey_Low, 168, 168, 168},
{Color_Dark_Grey_High, 144, 144, 144},
{Color_Dark_Grey_Low, 120, 120, 120},
{Color_Black, 96, 96, 96},
{Color_Light_Red, 255, 80, 80},
{Color_Light_Green, 96, 255, 96},
{Color_Light_Yellow, 255, 255, 96},
{Color_Light_Blue, 96, 160, 255},
{Color_Light_Orange, 255, 137, 49},
{Color_Light_Purple, 188, 126, 255},
{Color_Red, 224, 0, 0},
{Color_Green, 0, 224, 0},
{Color_Yellow, 224, 224, 0},
{Color_Blue, 0, 61, 213},
{Color_Orange, 253, 88, 0},
{Color_Purple, 121, 0, 253},
{Color_Dark_Red, 144, 0, 0},
{Color_Dark_Green, 0, 97, 62},
{Color_Dark_Yellow, 144, 128, 0},
{Color_Dark_Blue, 0, 32, 110},
{Color_Dark_Orange, 152, 32, 0},
{Color_Dark_Purple, 84, 0, 176},
{Color_Cream, 240, 240, 176},
{Color_Amber, 240, 150, 20},
{Color_Driftwood, 224, 208, 176},
{Color_Coral, 224, 64, 96},
{Color_Agate, 224, 192, 96},
{Color_Ivory, 255, 255, 240},
{Color_Obsidian, 64, 64, 128},
{Color_Bone, 224, 224, 208},
{Color_Brass, 224, 192, 0},
{Color_Bronze, 176, 141, 87},
{Color_Pewter, 150, 150, 192},
{Color_Tortoise_Shell, 208, 192, 96},
{Color_Aluminum, 240, 240, 240},
{Color_Cast_Iron, 160, 160, 176},
{Color_Chromium, 240, 240, 240},
{Color_Copper, 151, 92, 80},
{Color_Gold, 209, 181, 85},
{Color_Iron, 176, 176, 192},
{Color_Magnesium, 240, 240, 240},
{Color_Molybdenum, 240, 240, 240},
{Color_Nickel, 240, 240, 240},
{Color_Rusty, 208, 96, 32},
{Color_Silver, 160, 180, 224},
{Color_Steel, 224, 224, 240},
{Color_Tin, 224, 224, 224},
{Color_Titanium, 160, 160, 176},
{Color_Tungsten, 192, 192, 192},
{Color_Zirconium, 96, 96, 96},
{Color_Zinc, 208, 224, 255},
{Color_Dirt, 160, 112, 96},
{Color_Leprous, 144, 144, 64},
{Color_Flesh, 214, 181, 156},
{Color_Disenchanting, 224, 255, 176},
{Color_Rotting, 176, 128, 96},
{Color_Clay, 224, 224, 208},
{Color_Stone, 192, 192, 192},
{Color_Fire, 255, 80, 64},
{Color_Water, 64, 192, 240},
{Color_Earth, 176, 112, 64},
{Color_Air, 255, 255, 255},
{Color_Frost, 64, 224, 255},
{Color_Glowing, 240, 240, 176},
{Color_Gelatinous, 160, 224, 160},
{Color_Umber, 208, 176, 64},
{Color_Crystal, 224, 160, 255},
{Color_Brown, 128, 96, 77},
{Color_Ecru, 240, 224, 160},
{Color_Furry, 224, 160, 0},
{Color_Plaid, 208, 208, 208},
{Color_Slimy, 96, 176, 0},
{Color_Tan, 210, 180, 140},
{Color_Wooden, 208, 144, 80},
{Color_Wrinkled, 208, 208, 176},
{Color_Icky_Green, 160, 255, 0},
{Color_Light_Brown, 181, 101, 29},
{Color_Clear, 200, 200, 255},
{Color_Azure, 128, 192, 255},
{Color_Bubbling, 240, 240, 240},
{Color_Chartreuse, 176, 208, 112},
{Color_Cloudy, 112, 112, 128},
{Color_Crimson, 176, 64, 64},
{Color_Cyan, 0, 255, 255},
{Color_Hazy, 176, 176, 176},
{Color_Indigo, 112, 0, 192},
{Color_Magenta, 224, 0, 224},
{Color_Metallic_Blue, 64, 144, 255},
{Color_Metallic_Red, 255, 32, 64},
{Color_Metallic_Green, 32, 255, 96},
{Color_Metallic_Purple, 144, 96, 208},
{Color_Misty, 240, 240, 240},
{Color_Pink, 255, 144, 224},
{Color_Puce, 176, 96, 128},
{Color_Smoky, 112, 96, 96},
{Color_Tangerine, 242, 133, 0},
{Color_Violet, 224, 0, 240},
{Color_Vermilion, 227, 66, 52},
{Color_Alexandrite, 112, 208, 0},
{Color_Amethyst, 176, 0, 255},
{Color_Aquamarine, 0, 208, 196},
{Color_Azurite, 0, 176, 255},
{Color_Beryl, 112, 176, 96},
{Color_Bloodstone, 224, 80, 32},
{Color_Calcite, 224, 224, 224},
{Color_Carnelian, 176, 48, 0},
{Color_Corundum, 220, 72, 123},
{Color_Diamond, 132, 221, 233},
{Color_Emerald, 64, 208, 64},
{Color_Fluorite, 240, 255, 224},
{Color_Garnet, 224, 0, 0},
{Color_Granite, 112, 112, 128},
{Color_Jade, 112, 176, 48},
{Color_Jasper, 208, 80, 48},
{Color_Lapis_Lazuli, 11, 25, 225},
{Color_Magma, 176, 80, 32},
{Color_Malachite, 112, 176, 64},
{Color_Marble, 128, 144, 144},
{Color_Moonstone, 240, 240, 240},
{Color_Onyx, 224, 208, 208},
{Color_Pearl, 240, 240, 240},
{Color_Quartz, 230, 177, 170},
{Color_Quartzite, 208, 208, 208},
{Color_Rhodonite, 224, 0, 64},
{Color_Ruby, 240, 64, 64},
{Color_Sapphire, 53, 0, 255},
{Color_Tiger_Eye, 224, 128, 64},
{Color_Topaz, 224, 208, 32},
{Color_Turquoise, 0, 192, 192},
{Color_Zircon, 240, 224, 64},
{Color_Food, 176, 112, 96},
{Color_Slime, 144, 208, 0},
{Color_Leather, 120, 50, 32},
{Color_Cord, 208, 224, 224},
{Color_Paper, 240, 240, 224},
{Color_Old_Parchment, 208, 192, 160},
{Color_Apple, 208, 80, 0},
{Color_Oil, 80, 96, 112},
{Color_Magic_Light, 80, 176, 255},
{Color_Mud, 144, 128, 112},
{Color_Acid, 96, 112, 96},
{Color_Pottery, 208, 224, 224},
{Color_Wine, 176, 64, 96},
{Color_Mithril, 255, 255, 224},
{Color_Aspen, 224, 176, 96},
{Color_Balsa, 240, 224, 208},
{Color_Banyan, 224, 192, 128},
{Color_Birch, 144, 128, 108},
{Color_Cedar, 176, 96, 64},
{Color_Cottonwood, 208, 192, 176},
{Color_Cypress, 208, 192, 160},
{Color_Dogwood, 160, 128, 112},
{Color_Elm, 224, 176, 112},
{Color_Eucalyptus, 208, 192, 144},
{Color_Hemlock, 208, 176, 144},
{Color_Hickory, 176, 128, 112},
{Color_Ironwood, 112, 112, 128},
{Color_Locust, 240, 208, 64},
{Color_Mahogany, 176, 112, 64},
{Color_Maple, 224, 208, 144},
{Color_Mulberry, 176, 128, 128},
{Color_Oak, 224, 160, 112},
{Color_Pine, 176, 160, 144},
{Color_Redwood, 208, 96, 64},
{Color_Rosewood, 160, 80, 64},
{Color_Spruce, 176, 176, 80},
{Color_Sycamore, 208, 160, 128},
{Color_Teak, 240, 208, 128},
{Color_Walnut, 208, 176, 144},
{Color_Magic_Missile, 96, 192, 255},
{Color_Poison_Gas, 112, 192, 0},
{Color_Holy_Orb, 96, 96, 96},
{Color_Lightning, 240, 240, 176},
{Color_Deep_Black, 50, 50, 64},
{Color_Shadow_And_Flame, 255, 80, 64},
/* All new colors to be put after this point. */
};
