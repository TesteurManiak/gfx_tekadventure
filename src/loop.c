/*
** loop.c for loop in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Mon Apr 4 10:36:59 2016 Guillaume Roux
** Last update  Mon Apr 4 10:36:59 2016 Guillaume Roux
*/

#include "include/my.h"

t_bunny_response          main_loop2(void *data)
{
  t_blih                  *prog;
  
  prog = (t_blih *)data;
  if (prog->scene == 1)
    aff_map(prog);
  else if (prog->scene == 2)
    scene_plage(prog);
  else if (prog->scene == 3)
    scene_mer(prog);
  else if (prog->scene == 4)
    scene_forest(prog);
  bunny_blit(&prog->win->buffer, &prog->pix->clipable, NULL);
  bunny_display(prog->win);
  return (GO_ON);
}

t_bunny_response          main_loop(void *data)
{
  t_blih                  *prog;
  const t_bunny_position  *pos;
 
  prog = (t_blih *)data;
  init_scene(prog);
  prog->state_mouse = 0;
  pos = bunny_get_mouse_position();
  aff_background(prog->pix);
  aff_title(prog->pix);
  if (pos->x > 317 && pos->x < 733 && pos->y < 555 && pos->y > 410)
  {
    prog->state_mouse = 1;
    if (prog->button == 0)
      bunny_set_loop_main_function(&main_loop2);    
  }
  sprite_but(prog->pix, prog->state_mouse);
  sprite_mouse(prog->pix, prog->state_mouse, pos);
  bunny_blit(&prog->win->buffer, &prog->pix->clipable, NULL);
  bunny_display(prog->win);
  return (GO_ON);
}