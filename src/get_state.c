/*
** get_state.c for get_state in /home/roux_l/rendu/gfx_tekadventure/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Thu Apr 7 11:11:17 2016 Guillaume Roux
** Last update  Thu Apr 7 11:11:17 2016 Guillaume Roux
*/

#include "include/my.h"

int   get_state(const t_bunny_position *pos, t_blih *prog)
{
  int state;

  prog->state_take = 0;
  prog->state_obs = 0;
  if (pos->x > 97 && pos->x < 226 && pos->y > 672 && pos->y < 714)
  {
    prog->state_mouse = 1;
    prog->state_take = 1;
  }
  else if(pos->x > 716 && pos->x < 945 && pos->y > 672 && pos->y < 714)
  {
    prog->state_mouse = 1;
    prog->state_obs = 1;
  }
  state = prog->state_mouse;
  return (state);
}

int   state_map(const t_bunny_position *pos, t_blih *prog)
{
  int state;

  prog->state_take = 0;
  prog->state_obs = 0;
  if ((pos->x > 645 && pos->x < 695 && pos->y > 326 && pos->y < 376) ||
      (pos->x > 466 && pos->x < 516 && pos->y > 554 && pos->y < 604) ||
      (pos->x > 466 && pos->x < 516 && pos->y > 254 && pos->y < 304))
  {
    prog->state_mouse = 1;
    prog->state_take = 1;
  }
  state = prog->state_mouse;
  return (state); 
}