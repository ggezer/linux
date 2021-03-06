/*
 * Copyright (C) 2013 Mauro Ribeiro <mauro.ribeiro@hardkernel.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <linux/types.h>
#include <linux/fb.h>


#define GET_UMP_SECURE_ID_BUF1   _IOWR('m', 311, unsigned int)
#define GET_UMP_SECURE_ID_BUF2   _IOWR('m', 312, unsigned int)


struct hkdk4412_fb_pdata {
    u32 xres, yres;
    u32 virtual_x, virtual_y;
    u32 max_bpp;
    struct fb_info *fbinfo;
    u32 fb_phys;
    u32 rotate_screen;
    u32 screen_height_mm;   
    u32 screen_width_mm;
};
               