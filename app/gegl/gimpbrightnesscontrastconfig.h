/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpbrightnesscontrastconfig.h
 * Copyright (C) 2007 Michael Natterer <mitch@gimp.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __GIMP_BRIGHTNESS_CONTRAST_CONFIG_H__
#define __GIMP_BRIGHTNESS_CONTRAST_CONFIG_H__


#include "core/gimpviewable.h"


#define GIMP_TYPE_BRIGHTNESS_CONTRAST_CONFIG            (gimp_brightness_contrast_config_get_type ())
#define GIMP_BRIGHTNESS_CONTRAST_CONFIG(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_BRIGHTNESS_CONTRAST_CONFIG, GimpBrightnessContrastConfig))
#define GIMP_BRIGHTNESS_CONTRAST_CONFIG_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIMP_TYPE_BRIGHTNESS_CONTRAST_CONFIG, GimpBrightnessContrastConfigClass))
#define GIMP_IS_BRIGHTNESS_CONTRAST_CONFIG(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_BRIGHTNESS_CONTRAST_CONFIG))
#define GIMP_IS_BRIGHTNESS_CONTRAST_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIMP_TYPE_BRIGHTNESS_CONTRAST_CONFIG))
#define GIMP_BRIGHTNESS_CONTRAST_CONFIG_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIMP_TYPE_BRIGHTNESS_CONTRAST_CONFIG, GimpBrightnessContrastConfigClass))


typedef struct _GimpBrightnessContrastConfigClass GimpBrightnessContrastConfigClass;

struct _GimpBrightnessContrastConfig
{
  GimpViewable  parent_instance;

  gdouble       brightness;
  gdouble       contrast;
};

struct _GimpBrightnessContrastConfigClass
{
  GimpViewableClass  parent_class;
};


GType   gimp_brightness_contrast_config_get_type (void) G_GNUC_CONST;

void    gimp_brightness_contrast_config_set_node (GimpBrightnessContrastConfig *config,
                                                  GeglNode                     *node);


#endif /* __GIMP_BRIGHTNESS_CONTRAST_CONFIG_H__ */