/* FontPreview.c generated by valac 0.26.1, the Vala compiler
 * generated from FontPreview.vala, do not modify */

/* FontPreview.vala
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

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <pango/pango.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define FONT_MANAGER_TYPE_FONT_PREVIEW (font_manager_font_preview_get_type ())
#define FONT_MANAGER_FONT_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreview))
#define FONT_MANAGER_FONT_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreviewClass))
#define FONT_MANAGER_IS_FONT_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_FONT_PREVIEW))
#define FONT_MANAGER_IS_FONT_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_FONT_PREVIEW))
#define FONT_MANAGER_FONT_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreviewClass))

typedef struct _FontManagerFontPreview FontManagerFontPreview;
typedef struct _FontManagerFontPreviewClass FontManagerFontPreviewClass;
typedef struct _FontManagerFontPreviewPrivate FontManagerFontPreviewPrivate;

#define FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW (font_manager_adjustable_preview_get_type ())
#define FONT_MANAGER_ADJUSTABLE_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreview))
#define FONT_MANAGER_ADJUSTABLE_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreviewClass))
#define FONT_MANAGER_IS_ADJUSTABLE_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW))
#define FONT_MANAGER_IS_ADJUSTABLE_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW))
#define FONT_MANAGER_ADJUSTABLE_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreviewClass))

typedef struct _FontManagerAdjustablePreview FontManagerAdjustablePreview;
typedef struct _FontManagerAdjustablePreviewClass FontManagerAdjustablePreviewClass;

#define FONT_MANAGER_TYPE_ACTIVE_PREVIEW (font_manager_active_preview_get_type ())
#define FONT_MANAGER_ACTIVE_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_ACTIVE_PREVIEW, FontManagerActivePreview))
#define FONT_MANAGER_ACTIVE_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_ACTIVE_PREVIEW, FontManagerActivePreviewClass))
#define FONT_MANAGER_IS_ACTIVE_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_ACTIVE_PREVIEW))
#define FONT_MANAGER_IS_ACTIVE_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_ACTIVE_PREVIEW))
#define FONT_MANAGER_ACTIVE_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_ACTIVE_PREVIEW, FontManagerActivePreviewClass))

typedef struct _FontManagerActivePreview FontManagerActivePreview;
typedef struct _FontManagerActivePreviewClass FontManagerActivePreviewClass;

#define FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW (font_manager_standard_text_view_get_type ())
#define FONT_MANAGER_STANDARD_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView))
#define FONT_MANAGER_STANDARD_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextViewClass))
#define FONT_MANAGER_IS_STANDARD_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW))
#define FONT_MANAGER_IS_STANDARD_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW))
#define FONT_MANAGER_STANDARD_TEXT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextViewClass))

typedef struct _FontManagerStandardTextView FontManagerStandardTextView;
typedef struct _FontManagerStandardTextViewClass FontManagerStandardTextViewClass;

#define FONT_MANAGER_TYPE_STATIC_TEXT_VIEW (font_manager_static_text_view_get_type ())
#define FONT_MANAGER_STATIC_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, FontManagerStaticTextView))
#define FONT_MANAGER_STATIC_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, FontManagerStaticTextViewClass))
#define FONT_MANAGER_IS_STATIC_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW))
#define FONT_MANAGER_IS_STATIC_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW))
#define FONT_MANAGER_STATIC_TEXT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, FontManagerStaticTextViewClass))

typedef struct _FontManagerStaticTextView FontManagerStaticTextView;
typedef struct _FontManagerStaticTextViewClass FontManagerStaticTextViewClass;

#define FONT_MANAGER_TYPE_WATERFALL_PREVIEW (font_manager_waterfall_preview_get_type ())
#define FONT_MANAGER_WATERFALL_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_WATERFALL_PREVIEW, FontManagerWaterfallPreview))
#define FONT_MANAGER_WATERFALL_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_WATERFALL_PREVIEW, FontManagerWaterfallPreviewClass))
#define FONT_MANAGER_IS_WATERFALL_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_WATERFALL_PREVIEW))
#define FONT_MANAGER_IS_WATERFALL_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_WATERFALL_PREVIEW))
#define FONT_MANAGER_WATERFALL_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_WATERFALL_PREVIEW, FontManagerWaterfallPreviewClass))

typedef struct _FontManagerWaterfallPreview FontManagerWaterfallPreview;
typedef struct _FontManagerWaterfallPreviewClass FontManagerWaterfallPreviewClass;

#define FONT_MANAGER_TYPE_TEXT_PREVIEW (font_manager_text_preview_get_type ())
#define FONT_MANAGER_TEXT_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_TEXT_PREVIEW, FontManagerTextPreview))
#define FONT_MANAGER_TEXT_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_TEXT_PREVIEW, FontManagerTextPreviewClass))
#define FONT_MANAGER_IS_TEXT_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_TEXT_PREVIEW))
#define FONT_MANAGER_IS_TEXT_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_TEXT_PREVIEW))
#define FONT_MANAGER_TEXT_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_TEXT_PREVIEW, FontManagerTextPreviewClass))

typedef struct _FontManagerTextPreview FontManagerTextPreview;
typedef struct _FontManagerTextPreviewClass FontManagerTextPreviewClass;

#define FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE (font_manager_standard_text_tag_table_get_type ())
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTable))
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTableClass))
#define FONT_MANAGER_IS_STANDARD_TEXT_TAG_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE))
#define FONT_MANAGER_IS_STANDARD_TEXT_TAG_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE))
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTableClass))

typedef struct _FontManagerStandardTextTagTable FontManagerStandardTextTagTable;
typedef struct _FontManagerStandardTextTagTableClass FontManagerStandardTextTagTableClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define __vala_PangoFontDescription_free0(var) ((var == NULL) ? NULL : (var = (_vala_PangoFontDescription_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _FontManagerFontPreview {
	GtkBox parent_instance;
	FontManagerFontPreviewPrivate * priv;
};

struct _FontManagerFontPreviewClass {
	GtkBoxClass parent_class;
};

struct _FontManagerFontPreviewPrivate {
	GtkBox* box;
	GtkStack* stack;
	GtkStackSwitcher* switcher;
	GtkEventBox* blend;
	PangoFontDescription* _font_desc;
	FontManagerActivePreview* preview;
	FontManagerWaterfallPreview* waterfall;
	FontManagerTextPreview* body_text;
	FontManagerStandardTextTagTable* tag_table;
};


static gpointer font_manager_font_preview_parent_class = NULL;

GType font_manager_font_preview_get_type (void) G_GNUC_CONST;
GType font_manager_adjustable_preview_get_type (void) G_GNUC_CONST;
GType font_manager_active_preview_get_type (void) G_GNUC_CONST;
GType font_manager_standard_text_view_get_type (void) G_GNUC_CONST;
GType font_manager_static_text_view_get_type (void) G_GNUC_CONST;
GType font_manager_waterfall_preview_get_type (void) G_GNUC_CONST;
GType font_manager_text_preview_get_type (void) G_GNUC_CONST;
GType font_manager_standard_text_tag_table_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_FONT_PREVIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreviewPrivate))
enum  {
	FONT_MANAGER_FONT_PREVIEW_DUMMY_PROPERTY,
	FONT_MANAGER_FONT_PREVIEW_PANGRAM,
	FONT_MANAGER_FONT_PREVIEW_PREVIEW_SIZE,
	FONT_MANAGER_FONT_PREVIEW_FONT_DESC,
	FONT_MANAGER_FONT_PREVIEW_MODE
};
static void _vala_PangoFontDescription_free (PangoFontDescription* self);
FontManagerFontPreview* font_manager_font_preview_new (void);
FontManagerFontPreview* font_manager_font_preview_construct (GType object_type);
#define FONT_MANAGER_DEFAULT_PREVIEW_SIZE ((gdouble) 10)
#define FONT_MANAGER_MIN_FONT_SIZE 6.0
#define FONT_MANAGER_MAX_FONT_SIZE 96.0
FontManagerStandardTextTagTable* font_manager_standard_text_tag_table_new (void);
FontManagerStandardTextTagTable* font_manager_standard_text_tag_table_construct (GType object_type);
FontManagerActivePreview* font_manager_active_preview_new (FontManagerStandardTextTagTable* tag_table);
FontManagerActivePreview* font_manager_active_preview_construct (GType object_type, FontManagerStandardTextTagTable* tag_table);
FontManagerWaterfallPreview* font_manager_waterfall_preview_new (FontManagerStandardTextTagTable* tag_table);
FontManagerWaterfallPreview* font_manager_waterfall_preview_construct (GType object_type, FontManagerStandardTextTagTable* tag_table);
FontManagerTextPreview* font_manager_text_preview_new (FontManagerStandardTextTagTable* tag_table);
FontManagerTextPreview* font_manager_text_preview_construct (GType object_type, FontManagerStandardTextTagTable* tag_table);
FontManagerStaticTextView* font_manager_text_preview_get_preview (FontManagerTextPreview* self);
#define FONT_MANAGER_DEFAULT_FONT "Sans"
void font_manager_font_preview_set_font_desc (FontManagerFontPreview* self, PangoFontDescription* value);
void font_manager_adjustable_preview_set_adjustment (FontManagerAdjustablePreview* self, GtkAdjustment* value);
static void font_manager_font_preview_connect_signals (FontManagerFontPreview* self);
GtkSeparator* add_separator (GtkBox* box, GtkOrientation orientation, GtkPackType pack_type);
static void font_manager_font_preview_real_show (GtkWidget* base);
static void __lambda30_ (FontManagerFontPreview* self);
static void font_manager_font_preview_on_mode_changed (FontManagerFontPreview* self);
static void ___lambda30__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void __lambda31_ (FontManagerFontPreview* self, const gchar* n);
static void ___lambda31__font_manager_active_preview_preview_changed (FontManagerActivePreview* _sender, const gchar* preview_text, gpointer self);
static void __lambda32_ (FontManagerFontPreview* self);
static void ___lambda32__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
void font_manager_font_preview_set_preview_text (FontManagerFontPreview* self, const gchar* preview_text);
void font_manager_active_preview_set_preview_text (FontManagerActivePreview* self, const gchar* preview_text);
FontManagerStandardTextView* font_manager_active_preview_get_preview (FontManagerActivePreview* self);
GtkTextView* font_manager_standard_text_view_get_view (FontManagerStandardTextView* self);
const gchar* font_manager_font_preview_get_pangram (FontManagerFontPreview* self);
const gchar* font_manager_waterfall_preview_get_pangram (FontManagerWaterfallPreview* self);
void font_manager_font_preview_set_pangram (FontManagerFontPreview* self, const gchar* value);
void font_manager_waterfall_preview_set_pangram (FontManagerWaterfallPreview* self, const gchar* value);
gdouble font_manager_font_preview_get_preview_size (FontManagerFontPreview* self);
gdouble font_manager_adjustable_preview_get_preview_size (FontManagerAdjustablePreview* self);
void font_manager_font_preview_set_preview_size (FontManagerFontPreview* self, gdouble value);
void font_manager_adjustable_preview_set_preview_size (FontManagerAdjustablePreview* self, gdouble value);
PangoFontDescription* font_manager_font_preview_get_font_desc (FontManagerFontPreview* self);
void font_manager_text_preview_set_font_desc (FontManagerTextPreview* self, PangoFontDescription* value);
void font_manager_active_preview_set_font_desc (FontManagerActivePreview* self, PangoFontDescription* value);
static PangoFontDescription* _vala_PangoFontDescription_copy (PangoFontDescription* self);
const gchar* font_manager_font_preview_get_mode (FontManagerFontPreview* self);
void font_manager_font_preview_set_mode (FontManagerFontPreview* self, const gchar* value);
static void font_manager_font_preview_finalize (GObject* obj);
static void _vala_font_manager_font_preview_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_manager_font_preview_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static void _vala_PangoFontDescription_free (PangoFontDescription* self) {
	g_boxed_free (pango_font_description_get_type (), self);
}


FontManagerFontPreview* font_manager_font_preview_construct (GType object_type) {
	FontManagerFontPreview * self = NULL;
	GtkAdjustment* adjustment = NULL;
	GtkAdjustment* _tmp0_ = NULL;
	FontManagerStandardTextTagTable* _tmp1_ = NULL;
	FontManagerStandardTextTagTable* _tmp2_ = NULL;
	FontManagerActivePreview* _tmp3_ = NULL;
	FontManagerStandardTextTagTable* _tmp4_ = NULL;
	FontManagerWaterfallPreview* _tmp5_ = NULL;
	FontManagerStandardTextTagTable* _tmp6_ = NULL;
	FontManagerTextPreview* _tmp7_ = NULL;
	FontManagerTextPreview* _tmp8_ = NULL;
	FontManagerStaticTextView* _tmp9_ = NULL;
	FontManagerStaticTextView* _tmp10_ = NULL;
	PangoFontDescription* _tmp11_ = NULL;
	PangoFontDescription* _tmp12_ = NULL;
	FontManagerActivePreview* _tmp13_ = NULL;
	FontManagerTextPreview* _tmp14_ = NULL;
	GtkStack* _tmp15_ = NULL;
	GtkStack* _tmp16_ = NULL;
	FontManagerActivePreview* _tmp17_ = NULL;
	const gchar* _tmp18_ = NULL;
	GtkStack* _tmp19_ = NULL;
	FontManagerWaterfallPreview* _tmp20_ = NULL;
	const gchar* _tmp21_ = NULL;
	GtkStack* _tmp22_ = NULL;
	FontManagerTextPreview* _tmp23_ = NULL;
	const gchar* _tmp24_ = NULL;
	GtkStack* _tmp25_ = NULL;
	GtkEventBox* _tmp26_ = NULL;
	GtkStackSwitcher* _tmp27_ = NULL;
	GtkStackSwitcher* _tmp28_ = NULL;
	GtkStack* _tmp29_ = NULL;
	GtkStackSwitcher* _tmp30_ = NULL;
	GtkStackSwitcher* _tmp31_ = NULL;
	GtkStackSwitcher* _tmp32_ = NULL;
	GtkStackSwitcher* _tmp33_ = NULL;
	GtkStackSwitcher* _tmp34_ = NULL;
	GtkEventBox* _tmp35_ = NULL;
	GtkStyleContext* _tmp36_ = NULL;
	GtkEventBox* _tmp37_ = NULL;
	GtkStackSwitcher* _tmp38_ = NULL;
	GtkEventBox* _tmp39_ = NULL;
	GtkSeparator* _tmp40_ = NULL;
	GtkSeparator* _tmp41_ = NULL;
	GtkBox* _tmp42_ = NULL;
	GtkBox* _tmp43_ = NULL;
	GtkStack* _tmp44_ = NULL;
	GtkBox* _tmp45_ = NULL;
	self = (FontManagerFontPreview*) g_object_new (object_type, NULL);
	gtk_orientable_set_orientation ((GtkOrientable*) self, GTK_ORIENTATION_VERTICAL);
	_tmp0_ = gtk_adjustment_new (FONT_MANAGER_DEFAULT_PREVIEW_SIZE, FONT_MANAGER_MIN_FONT_SIZE, FONT_MANAGER_MAX_FONT_SIZE, 0.5, 1.0, (gdouble) 0);
	g_object_ref_sink (_tmp0_);
	adjustment = _tmp0_;
	_tmp1_ = font_manager_standard_text_tag_table_new ();
	_g_object_unref0 (self->priv->tag_table);
	self->priv->tag_table = _tmp1_;
	_tmp2_ = self->priv->tag_table;
	_tmp3_ = font_manager_active_preview_new (_tmp2_);
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->priv->preview);
	self->priv->preview = _tmp3_;
	_tmp4_ = self->priv->tag_table;
	_tmp5_ = font_manager_waterfall_preview_new (_tmp4_);
	g_object_ref_sink (_tmp5_);
	_g_object_unref0 (self->priv->waterfall);
	self->priv->waterfall = _tmp5_;
	_tmp6_ = self->priv->tag_table;
	_tmp7_ = font_manager_text_preview_new (_tmp6_);
	g_object_ref_sink (_tmp7_);
	_g_object_unref0 (self->priv->body_text);
	self->priv->body_text = _tmp7_;
	_tmp8_ = self->priv->body_text;
	_tmp9_ = font_manager_text_preview_get_preview (_tmp8_);
	_tmp10_ = _tmp9_;
	gtk_widget_set_name ((GtkWidget*) _tmp10_, "FontManagerBodyTextPreview");
	_tmp11_ = pango_font_description_from_string (FONT_MANAGER_DEFAULT_FONT);
	_tmp12_ = _tmp11_;
	font_manager_font_preview_set_font_desc (self, _tmp12_);
	__vala_PangoFontDescription_free0 (_tmp12_);
	_tmp13_ = self->priv->preview;
	font_manager_adjustable_preview_set_adjustment ((FontManagerAdjustablePreview*) _tmp13_, adjustment);
	_tmp14_ = self->priv->body_text;
	font_manager_adjustable_preview_set_adjustment ((FontManagerAdjustablePreview*) _tmp14_, adjustment);
	_tmp15_ = (GtkStack*) gtk_stack_new ();
	g_object_ref_sink (_tmp15_);
	_g_object_unref0 (self->priv->stack);
	self->priv->stack = _tmp15_;
	_tmp16_ = self->priv->stack;
	_tmp17_ = self->priv->preview;
	_tmp18_ = _ ("Preview");
	gtk_stack_add_titled (_tmp16_, (GtkWidget*) _tmp17_, "Preview", _tmp18_);
	_tmp19_ = self->priv->stack;
	_tmp20_ = self->priv->waterfall;
	_tmp21_ = _ ("Waterfall");
	gtk_stack_add_titled (_tmp19_, (GtkWidget*) _tmp20_, "Waterfall", _tmp21_);
	_tmp22_ = self->priv->stack;
	_tmp23_ = self->priv->body_text;
	_tmp24_ = _ ("Body Text");
	gtk_stack_add_titled (_tmp22_, (GtkWidget*) _tmp23_, "Body Text", _tmp24_);
	_tmp25_ = self->priv->stack;
	gtk_stack_set_transition_type (_tmp25_, GTK_STACK_TRANSITION_TYPE_CROSSFADE);
	_tmp26_ = (GtkEventBox*) gtk_event_box_new ();
	g_object_ref_sink (_tmp26_);
	_g_object_unref0 (self->priv->blend);
	self->priv->blend = _tmp26_;
	_tmp27_ = (GtkStackSwitcher*) gtk_stack_switcher_new ();
	g_object_ref_sink (_tmp27_);
	_g_object_unref0 (self->priv->switcher);
	self->priv->switcher = _tmp27_;
	_tmp28_ = self->priv->switcher;
	_tmp29_ = self->priv->stack;
	gtk_stack_switcher_set_stack (_tmp28_, _tmp29_);
	_tmp30_ = self->priv->switcher;
	gtk_container_set_border_width ((GtkContainer*) _tmp30_, (guint) 6);
	_tmp31_ = self->priv->switcher;
	gtk_widget_set_halign ((GtkWidget*) _tmp31_, GTK_ALIGN_CENTER);
	_tmp32_ = self->priv->switcher;
	gtk_widget_set_valign ((GtkWidget*) _tmp32_, GTK_ALIGN_CENTER);
	_tmp33_ = self->priv->switcher;
	gtk_box_set_homogeneous ((GtkBox*) _tmp33_, TRUE);
	_tmp34_ = self->priv->switcher;
	gtk_orientable_set_orientation ((GtkOrientable*) _tmp34_, GTK_ORIENTATION_HORIZONTAL);
	_tmp35_ = self->priv->blend;
	_tmp36_ = gtk_widget_get_style_context ((GtkWidget*) _tmp35_);
	gtk_style_context_add_class (_tmp36_, GTK_STYLE_CLASS_VIEW);
	_tmp37_ = self->priv->blend;
	_tmp38_ = self->priv->switcher;
	gtk_container_add ((GtkContainer*) _tmp37_, (GtkWidget*) _tmp38_);
	font_manager_font_preview_connect_signals (self);
	_tmp39_ = self->priv->blend;
	gtk_box_pack_start ((GtkBox*) self, (GtkWidget*) _tmp39_, FALSE, TRUE, (guint) 0);
	_tmp40_ = add_separator ((GtkBox*) self, GTK_ORIENTATION_HORIZONTAL, GTK_PACK_START);
	_tmp41_ = _tmp40_;
	_g_object_unref0 (_tmp41_);
	_tmp42_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp42_);
	_g_object_unref0 (self->priv->box);
	self->priv->box = _tmp42_;
	_tmp43_ = self->priv->box;
	_tmp44_ = self->priv->stack;
	gtk_box_pack_start (_tmp43_, (GtkWidget*) _tmp44_, TRUE, TRUE, (guint) 0);
	_tmp45_ = self->priv->box;
	gtk_box_pack_end ((GtkBox*) self, (GtkWidget*) _tmp45_, TRUE, TRUE, (guint) 0);
	_g_object_unref0 (adjustment);
	return self;
}


FontManagerFontPreview* font_manager_font_preview_new (void) {
	return font_manager_font_preview_construct (FONT_MANAGER_TYPE_FONT_PREVIEW);
}


static void font_manager_font_preview_real_show (GtkWidget* base) {
	FontManagerFontPreview * self;
	GtkEventBox* _tmp0_ = NULL;
	FontManagerActivePreview* _tmp1_ = NULL;
	FontManagerWaterfallPreview* _tmp2_ = NULL;
	FontManagerTextPreview* _tmp3_ = NULL;
	GtkStack* _tmp4_ = NULL;
	GtkStackSwitcher* _tmp5_ = NULL;
	GtkBox* _tmp6_ = NULL;
	self = (FontManagerFontPreview*) base;
	_tmp0_ = self->priv->blend;
	gtk_widget_show ((GtkWidget*) _tmp0_);
	_tmp1_ = self->priv->preview;
	gtk_widget_show ((GtkWidget*) _tmp1_);
	_tmp2_ = self->priv->waterfall;
	gtk_widget_show ((GtkWidget*) _tmp2_);
	_tmp3_ = self->priv->body_text;
	gtk_widget_show ((GtkWidget*) _tmp3_);
	_tmp4_ = self->priv->stack;
	gtk_widget_show ((GtkWidget*) _tmp4_);
	_tmp5_ = self->priv->switcher;
	gtk_widget_show ((GtkWidget*) _tmp5_);
	_tmp6_ = self->priv->box;
	gtk_widget_show ((GtkWidget*) _tmp6_);
	GTK_WIDGET_CLASS (font_manager_font_preview_parent_class)->show ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_box_get_type (), GtkBox));
	return;
}


static void __lambda30_ (FontManagerFontPreview* self) {
	font_manager_font_preview_on_mode_changed (self);
}


static void ___lambda30__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
	__lambda30_ ((FontManagerFontPreview*) self);
}


static void __lambda31_ (FontManagerFontPreview* self, const gchar* n) {
	const gchar* _tmp0_ = NULL;
	g_return_if_fail (n != NULL);
	_tmp0_ = n;
	g_signal_emit_by_name (self, "preview-changed", _tmp0_);
}


static void ___lambda31__font_manager_active_preview_preview_changed (FontManagerActivePreview* _sender, const gchar* preview_text, gpointer self) {
	__lambda31_ ((FontManagerFontPreview*) self, preview_text);
}


static void __lambda32_ (FontManagerFontPreview* self) {
	g_object_notify ((GObject*) self, "preview-size");
}


static void ___lambda32__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
	__lambda32_ ((FontManagerFontPreview*) self);
}


static void font_manager_font_preview_connect_signals (FontManagerFontPreview* self) {
	GtkStack* _tmp0_ = NULL;
	FontManagerActivePreview* _tmp1_ = NULL;
	FontManagerActivePreview* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->stack;
	g_signal_connect_object ((GObject*) _tmp0_, "notify::visible-child-name", (GCallback) ___lambda30__g_object_notify, self, 0);
	_tmp1_ = self->priv->preview;
	g_signal_connect_object (_tmp1_, "preview-changed", (GCallback) ___lambda31__font_manager_active_preview_preview_changed, self, 0);
	_tmp2_ = self->priv->preview;
	g_signal_connect_object ((GObject*) _tmp2_, "notify::preview-size", (GCallback) ___lambda32__g_object_notify, self, 0);
	return;
}


void font_manager_font_preview_set_preview_text (FontManagerFontPreview* self, const gchar* preview_text) {
	FontManagerActivePreview* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (preview_text != NULL);
	_tmp0_ = self->priv->preview;
	_tmp1_ = preview_text;
	font_manager_active_preview_set_preview_text (_tmp0_, _tmp1_);
	return;
}


static void font_manager_font_preview_on_mode_changed (FontManagerFontPreview* self) {
	gchar* mode = NULL;
	GtkStack* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	GQuark _tmp6_ = 0U;
	static GQuark _tmp5_label0 = 0;
	static GQuark _tmp5_label1 = 0;
	static GQuark _tmp5_label2 = 0;
	const gchar* _tmp16_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->stack;
	_tmp1_ = gtk_stack_get_visible_child_name (_tmp0_);
	_tmp2_ = g_strdup (_tmp1_);
	mode = _tmp2_;
	_tmp3_ = mode;
	_tmp4_ = _tmp3_;
	_tmp6_ = (NULL == _tmp4_) ? 0 : g_quark_from_string (_tmp4_);
	if (_tmp6_ == ((0 != _tmp5_label0) ? _tmp5_label0 : (_tmp5_label0 = g_quark_from_static_string ("Preview")))) {
		switch (0) {
			default:
			{
				FontManagerActivePreview* _tmp7_ = NULL;
				FontManagerStandardTextView* _tmp8_ = NULL;
				FontManagerStandardTextView* _tmp9_ = NULL;
				_tmp7_ = self->priv->preview;
				_tmp8_ = font_manager_active_preview_get_preview (_tmp7_);
				_tmp9_ = _tmp8_;
				gtk_widget_queue_draw ((GtkWidget*) _tmp9_);
				break;
			}
		}
	} else if (_tmp6_ == ((0 != _tmp5_label1) ? _tmp5_label1 : (_tmp5_label1 = g_quark_from_static_string ("Waterfall")))) {
		switch (0) {
			default:
			{
				FontManagerWaterfallPreview* _tmp10_ = NULL;
				GtkTextView* _tmp11_ = NULL;
				GtkTextView* _tmp12_ = NULL;
				_tmp10_ = self->priv->waterfall;
				_tmp11_ = font_manager_standard_text_view_get_view ((FontManagerStandardTextView*) _tmp10_);
				_tmp12_ = _tmp11_;
				gtk_widget_queue_draw ((GtkWidget*) _tmp12_);
				break;
			}
		}
	} else if (_tmp6_ == ((0 != _tmp5_label2) ? _tmp5_label2 : (_tmp5_label2 = g_quark_from_static_string ("Body Text")))) {
		switch (0) {
			default:
			{
				FontManagerTextPreview* _tmp13_ = NULL;
				FontManagerStaticTextView* _tmp14_ = NULL;
				FontManagerStaticTextView* _tmp15_ = NULL;
				_tmp13_ = self->priv->body_text;
				_tmp14_ = font_manager_text_preview_get_preview (_tmp13_);
				_tmp15_ = _tmp14_;
				gtk_widget_queue_draw ((GtkWidget*) _tmp15_);
				break;
			}
		}
	}
	_tmp16_ = mode;
	g_signal_emit_by_name (self, "mode-changed", _tmp16_);
	_g_free0 (mode);
	return;
}


const gchar* font_manager_font_preview_get_pangram (FontManagerFontPreview* self) {
	const gchar* result;
	FontManagerWaterfallPreview* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->waterfall;
	_tmp1_ = font_manager_waterfall_preview_get_pangram (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


void font_manager_font_preview_set_pangram (FontManagerFontPreview* self, const gchar* value) {
	FontManagerWaterfallPreview* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->waterfall;
	_tmp1_ = value;
	_tmp2_ = g_strdup_printf ("%s\n", _tmp1_);
	_tmp3_ = _tmp2_;
	font_manager_waterfall_preview_set_pangram (_tmp0_, _tmp3_);
	_g_free0 (_tmp3_);
	g_object_notify ((GObject *) self, "pangram");
}


gdouble font_manager_font_preview_get_preview_size (FontManagerFontPreview* self) {
	gdouble result;
	FontManagerActivePreview* _tmp0_ = NULL;
	gdouble _tmp1_ = 0.0;
	gdouble _tmp2_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	_tmp0_ = self->priv->preview;
	_tmp1_ = font_manager_adjustable_preview_get_preview_size ((FontManagerAdjustablePreview*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


void font_manager_font_preview_set_preview_size (FontManagerFontPreview* self, gdouble value) {
	FontManagerActivePreview* _tmp0_ = NULL;
	FontManagerTextPreview* _tmp1_ = NULL;
	gdouble _tmp2_ = 0.0;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->preview;
	_tmp1_ = self->priv->body_text;
	_tmp2_ = value;
	font_manager_adjustable_preview_set_preview_size ((FontManagerAdjustablePreview*) _tmp1_, _tmp2_);
	font_manager_adjustable_preview_set_preview_size ((FontManagerAdjustablePreview*) _tmp0_, _tmp2_);
	g_object_notify ((GObject *) self, "preview-size");
}


PangoFontDescription* font_manager_font_preview_get_font_desc (FontManagerFontPreview* self) {
	PangoFontDescription* result;
	PangoFontDescription* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_font_desc;
	result = _tmp0_;
	return result;
}


static PangoFontDescription* _vala_PangoFontDescription_copy (PangoFontDescription* self) {
	return g_boxed_copy (pango_font_description_get_type (), self);
}


static gpointer __vala_PangoFontDescription_copy0 (gpointer self) {
	return self ? _vala_PangoFontDescription_copy (self) : NULL;
}


void font_manager_font_preview_set_font_desc (FontManagerFontPreview* self, PangoFontDescription* value) {
	FontManagerActivePreview* _tmp0_ = NULL;
	FontManagerTextPreview* _tmp1_ = NULL;
	PangoFontDescription* _tmp2_ = NULL;
	PangoFontDescription* _tmp3_ = NULL;
	FontManagerStandardTextTagTable* _tmp4_ = NULL;
	GtkTextTag* _tmp5_ = NULL;
	PangoFontDescription* _tmp6_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->preview;
	_tmp1_ = self->priv->body_text;
	_tmp2_ = value;
	font_manager_text_preview_set_font_desc (_tmp1_, _tmp2_);
	font_manager_active_preview_set_font_desc (_tmp0_, _tmp2_);
	_tmp3_ = __vala_PangoFontDescription_copy0 (_tmp2_);
	__vala_PangoFontDescription_free0 (self->priv->_font_desc);
	self->priv->_font_desc = _tmp3_;
	_tmp4_ = self->priv->tag_table;
	_tmp5_ = gtk_text_tag_table_lookup ((GtkTextTagTable*) _tmp4_, "FontDescription");
	_tmp6_ = self->priv->_font_desc;
	g_object_set (_tmp5_, "font-desc", _tmp6_, NULL);
	g_object_notify ((GObject *) self, "font-desc");
}


const gchar* font_manager_font_preview_get_mode (FontManagerFontPreview* self) {
	const gchar* result;
	GtkStack* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->stack;
	_tmp1_ = gtk_stack_get_visible_child_name (_tmp0_);
	result = _tmp1_;
	return result;
}


void font_manager_font_preview_set_mode (FontManagerFontPreview* self, const gchar* value) {
	GtkStack* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->stack;
	_tmp1_ = value;
	gtk_stack_set_visible_child_name (_tmp0_, _tmp1_);
	g_object_notify ((GObject *) self, "mode");
}


static void font_manager_font_preview_class_init (FontManagerFontPreviewClass * klass) {
	font_manager_font_preview_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerFontPreviewPrivate));
	((GtkWidgetClass *) klass)->show = font_manager_font_preview_real_show;
	G_OBJECT_CLASS (klass)->get_property = _vala_font_manager_font_preview_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_manager_font_preview_set_property;
	G_OBJECT_CLASS (klass)->finalize = font_manager_font_preview_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_PREVIEW_PANGRAM, g_param_spec_string ("pangram", "pangram", "pangram", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_PREVIEW_PREVIEW_SIZE, g_param_spec_double ("preview-size", "preview-size", "preview-size", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_PREVIEW_FONT_DESC, g_param_spec_boxed ("font-desc", "font-desc", "font-desc", pango_font_description_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_PREVIEW_MODE, g_param_spec_string ("mode", "mode", "mode", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_signal_new ("mode_changed", FONT_MANAGER_TYPE_FONT_PREVIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
	g_signal_new ("preview_changed", FONT_MANAGER_TYPE_FONT_PREVIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
}


static void font_manager_font_preview_instance_init (FontManagerFontPreview * self) {
	self->priv = FONT_MANAGER_FONT_PREVIEW_GET_PRIVATE (self);
}


static void font_manager_font_preview_finalize (GObject* obj) {
	FontManagerFontPreview * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreview);
	_g_object_unref0 (self->priv->box);
	_g_object_unref0 (self->priv->stack);
	_g_object_unref0 (self->priv->switcher);
	_g_object_unref0 (self->priv->blend);
	__vala_PangoFontDescription_free0 (self->priv->_font_desc);
	_g_object_unref0 (self->priv->preview);
	_g_object_unref0 (self->priv->waterfall);
	_g_object_unref0 (self->priv->body_text);
	_g_object_unref0 (self->priv->tag_table);
	G_OBJECT_CLASS (font_manager_font_preview_parent_class)->finalize (obj);
}


GType font_manager_font_preview_get_type (void) {
	static volatile gsize font_manager_font_preview_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_font_preview_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerFontPreviewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_font_preview_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerFontPreview), 0, (GInstanceInitFunc) font_manager_font_preview_instance_init, NULL };
		GType font_manager_font_preview_type_id;
		font_manager_font_preview_type_id = g_type_register_static (gtk_box_get_type (), "FontManagerFontPreview", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_font_preview_type_id__volatile, font_manager_font_preview_type_id);
	}
	return font_manager_font_preview_type_id__volatile;
}


static void _vala_font_manager_font_preview_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontManagerFontPreview * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreview);
	switch (property_id) {
		case FONT_MANAGER_FONT_PREVIEW_PANGRAM:
		g_value_set_string (value, font_manager_font_preview_get_pangram (self));
		break;
		case FONT_MANAGER_FONT_PREVIEW_PREVIEW_SIZE:
		g_value_set_double (value, font_manager_font_preview_get_preview_size (self));
		break;
		case FONT_MANAGER_FONT_PREVIEW_FONT_DESC:
		g_value_set_boxed (value, font_manager_font_preview_get_font_desc (self));
		break;
		case FONT_MANAGER_FONT_PREVIEW_MODE:
		g_value_set_string (value, font_manager_font_preview_get_mode (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_manager_font_preview_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontManagerFontPreview * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_FONT_PREVIEW, FontManagerFontPreview);
	switch (property_id) {
		case FONT_MANAGER_FONT_PREVIEW_PANGRAM:
		font_manager_font_preview_set_pangram (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_PREVIEW_PREVIEW_SIZE:
		font_manager_font_preview_set_preview_size (self, g_value_get_double (value));
		break;
		case FONT_MANAGER_FONT_PREVIEW_FONT_DESC:
		font_manager_font_preview_set_font_desc (self, g_value_get_boxed (value));
		break;
		case FONT_MANAGER_FONT_PREVIEW_MODE:
		font_manager_font_preview_set_mode (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


