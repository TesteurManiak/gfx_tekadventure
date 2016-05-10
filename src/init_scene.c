/*
** init_scene.c for init_scene in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Wed Apr 13 09:58:54 2016 Guillaume Roux
** Last update  Wed Apr 13 09:58:54 2016 Guillaume Roux
*/

#include "include/my.h"

void  scene_plage(t_blih *prog)
{
  const t_bunny_position  *pos;

  pos = bunny_get_mouse_position();
  prog->state_mouse = 0;
  prog->state_mouse = get_state(pos, prog);
  plage(prog->pix);
  make_move(prog, pos);
  sprite_bouton(prog->pix, prog->state_take);
  sprite_obs(prog->pix, prog->state_obs);
  sprite_mouse(prog->pix, prog->state_mouse, pos);
}

void  scene_forest(t_blih *prog)
{
  const t_bunny_position  *pos;

  pos = bunny_get_mouse_position();
  prog->state_mouse = 0;
  prog->state_mouse = get_state(pos, prog);
  fond_forest(prog->pix);
  move_forest(prog, pos);
  sprite_bouton(prog->pix, prog->state_take);
  sprite_obs(prog->pix, prog->state_obs);
  sprite_mouse(prog->pix, prog->state_mouse, pos); 
}

void  scene_mer(t_blih *prog)
{
  const t_bunny_position  *pos;

  pos = bunny_get_mouse_position();
  prog->state_mouse = 0;
  prog->state_mouse = get_state(pos, prog);
  fond_mer(prog->pix);
  make_move(prog, pos);
  sprite_bouton(prog->pix, prog->state_take);
  sprite_obs(prog->pix, prog->state_obs);
  sprite_mouse(prog->pix, prog->state_mouse, pos);
}

void  aff_map(t_blih *prog)
{
  const t_bunny_position  *pos;

  pos = bunny_get_mouse_position();
  prog->state_mouse = 0;
  prog->pos_in = 1;
  map(prog->pix);
  prog->state_mouse = state_map(pos, prog);
  if (prog->button == 0)
  {
    if (pos->x > 645 && pos->x < 695 && pos->y > 326 && pos->y < 376)
      prog->scene = 2;
    else if (pos->x > 466 && pos->x < 516 && pos->y > 554 && pos->y < 604)
      prog->scene = 3;
    else if (pos->x > 466 && pos->x < 516 && pos->y > 254 && pos->y < 304)
      prog->scene = 4;
  }
  sprite_mouse(prog->pix, prog->state_mouse, pos); 
}

void  init_scene(t_blih *prog)
{
  prog->scene = 1;
}