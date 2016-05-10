/*
** my.h for my in /home/roux_l/rendu/gfx_tekadventure/src/include
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Fri Mar 25 15:51:29 2016 Guillaume Roux
** Last update  Fri Mar 25 15:51:29 2016 Guillaume Roux
*/

#ifndef MY_H_
# define MY_H_

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <lapin.h>
# include <time.h>

# define S_WIDTH (50)
# define S_HEIGHT (108)

# define WIDTH (1024)
# define HEIGHT (768)

typedef struct      s_switch
{
  int               switch_mouse;
  int               observe;
}                   t_switch;

typedef struct        s_font
{
  t_bunny_pixelarray  *font;
  t_bunny_position    letter;
  int                 scale;
}                     t_font;

typedef struct        s_blih
{
  t_bunny_mousebutton button;
  t_bunny_window      *win;
  t_bunny_pixelarray  *pix;
  t_font              font;
  t_switch            switcher;
  t_bunny_position    pos_scene;
  int                 pos_in;
  int                 scene;
  int                 state_mouse;
  int                 state_take;
  int                 state_obs;
}                     t_blih;

void                  simon_sprite(t_bunny_pixelarray *pix, const t_bunny_position *pos, t_blih *prog);
t_bunny_position      simon_move(t_bunny_position *origin, const t_bunny_position *dest);
void                  sound();
t_bunny_position      *move_forest(t_blih *prog, const t_bunny_position *pos);
void                  fond_forest(t_bunny_pixelarray *pix);
void                  scene_forest(t_blih *prog);
int                   state_map(const t_bunny_position *pos, t_blih *prog);
void                  aff_map(t_blih *prog);
void                  map(t_bunny_pixelarray *pix);
void                  scene_mer(t_blih *prog);
void                  fond_mer(t_bunny_pixelarray *pix);
void                  scene_plage(t_blih *prog);
void                  init_scene(t_blih *prog);
int                   get_state(const t_bunny_position *pos, t_blih *prog);
void                  sprite_obs(t_bunny_pixelarray *pix, int state);
void                  sprite_bouton(t_bunny_pixelarray *pix, int state);
void                  plage(t_bunny_pixelarray *pix);
t_bunny_position      *make_move(t_blih *prog, const t_bunny_position *pos);
void                  aff_mouse(t_bunny_pixelarray *pix, t_bunny_pixelarray *arthur, const t_bunny_position *pos, int state);
void                  sprite_mouse(t_bunny_pixelarray *pix, int state, const t_bunny_position *pos);
void                  aff_button(t_bunny_pixelarray *pix, t_bunny_pixelarray *arthur, t_bunny_position *pos, int state, int width, int height);
void                  sprite_but(t_bunny_pixelarray *pix, int state);
void                  move_sprite(t_bunny_pixelarray *pix, t_bunny_position *pos, const t_bunny_position *next);
void                  aff_title(t_bunny_pixelarray *pix);
void                  aff_sprite(t_bunny_pixelarray *pix, t_bunny_pixelarray *sprite, const t_bunny_position *pos, int state);
void                  arthur_sprite(t_bunny_pixelarray *pix, const t_bunny_position *pos, t_blih *prog);
void                  tektext(t_bunny_pixelarray *pix, const char *str, t_font *font, t_bunny_position *pos);
void                  aff_letter(t_bunny_pixelarray *pix, t_font *font, char letter, t_bunny_position *pos);
void                  print_scale(t_bunny_pixelarray *pix, t_bunny_position *pos, t_color *color, int scale);
void                  aff_background(t_bunny_pixelarray *pix);
unsigned int          get_color(t_bunny_pixelarray *pix, int x, int y);
void                  tekpixel(t_bunny_pixelarray *pix, t_bunny_position *pos, unsigned int color);
t_bunny_response      main_loop(void *data);
t_bunny_response      main_loop2(void *data);
t_bunny_position      dim_letter(t_bunny_pixelarray *pix);
t_bunny_position      setup_move(t_bunny_position *origin, const t_bunny_position *dest);

#endif /* !MY_H_ */
