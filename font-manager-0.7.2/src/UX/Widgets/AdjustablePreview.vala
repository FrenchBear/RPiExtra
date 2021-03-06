/* AdjustablePreview.vala
 *
 * Copyright (C) 2009 - 2015 Jerry Casiano
 *
 * This file is part of Font Manager.
 *
 * Font Manager is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Font Manager is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Font Manager.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author:
 *        Jerry Casiano <JerryCasiano@gmail.com>
*/

namespace FontManager {

    public abstract class AdjustablePreview : Gtk.Box {

        public double preview_size {
            get {
                return _preview_size;
            }
            set {
                _preview_size = value.clamp(MIN_FONT_SIZE, MAX_FONT_SIZE);
                set_preview_size_internal(_preview_size);
            }
        }

        public weak Gtk.Adjustment adjustment {
            get {
                return fontscale.adjustment;
            }
            set {
                fontscale.adjustment = value;
                fontscale.adjustment.bind_property("value", this, "preview-size", BindingFlags.BIDIRECTIONAL);
            }
        }

        protected double _preview_size;
        protected FontScale fontscale;

        protected abstract void set_preview_size_internal (double new_size);

        protected virtual void init () {
            fontscale = new FontScale();
            adjustment = fontscale.adjustment;
            return;
        }

        protected double get_desc_size () {
            if (preview_size <= 10)
                return preview_size;
            else if (preview_size <= 20)
                return preview_size / 1.25;
            else if (preview_size <= 30)
                return preview_size / 1.5;
            else if (preview_size <= 50)
                return preview_size / 1.75;
            else
                return preview_size / 2;
        }

    }

}
