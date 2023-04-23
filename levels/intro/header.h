#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// leveldata
extern Lights1 xl_wood_lights;
extern Lights1 xl_r_lights;
extern Lights1 xl_y_lights;
extern Lights1 xl_b_lights;
extern Lights1 xl_g_lights;
extern Vtx xl_logo_mesh_vtx_0[1462];
extern Gfx xl_logo_mesh_tri_0[];
extern Vtx xl_logo_mesh_vtx_1[287];
extern Gfx xl_logo_mesh_tri_1[];
extern Vtx xl_logo_mesh_vtx_2[505];
extern Gfx xl_logo_mesh_tri_2[];
extern Vtx xl_logo_mesh_vtx_3[332];
extern Gfx xl_logo_mesh_tri_3[];
extern Vtx xl_logo_mesh_vtx_4[304];
extern Gfx xl_logo_mesh_tri_4[];
extern Gfx mat_xl_wood[];
extern Gfx mat_xl_r[];
extern Gfx mat_xl_y[];
extern Gfx mat_xl_b[];
extern Gfx mat_xl_g[];
extern Gfx xl_logo_mesh[];

extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_level_select[];
extern const LevelScript script_intro_file_select[];
extern const LevelScript script_intro_level_select[];
extern const LevelScript script_intro_main_level_entry_stop_music[];
extern const LevelScript script_intro_main_level_entry[];
extern const LevelScript script_intro_splash_screen[];

#endif
