#ifndef INC_1OOM_HWSDL2_MOUSE_H
#define INC_1OOM_HWSDL2_MOUSE_H

#include "types.h"

struct SDL_Rect;

extern void hw_mouse_set_moo_range(int w, int h);
extern void hw_mouse_set_win_range(int x0, int y0, int w, int h);
extern void hw_mouse_init(void);

/* Used by hwsdl_event.c */
extern void hw_mouse_set_xy(int dx, int dy);
extern void hw_mouse_button(int i, int pressed);
extern void hw_mouse_scroll(int scroll);

#endif
