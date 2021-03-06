/* TextViews.c generated by valac 0.26.1, the Vala compiler
 * generated from TextViews.vala, do not modify */

/* TextViews.vala
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
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>


#define FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE (font_manager_standard_text_tag_table_get_type ())
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTable))
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTableClass))
#define FONT_MANAGER_IS_STANDARD_TEXT_TAG_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE))
#define FONT_MANAGER_IS_STANDARD_TEXT_TAG_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE))
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTableClass))

typedef struct _FontManagerStandardTextTagTable FontManagerStandardTextTagTable;
typedef struct _FontManagerStandardTextTagTableClass FontManagerStandardTextTagTableClass;
typedef struct _FontManagerStandardTextTagTablePrivate FontManagerStandardTextTagTablePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW (font_manager_standard_text_view_get_type ())
#define FONT_MANAGER_STANDARD_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView))
#define FONT_MANAGER_STANDARD_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextViewClass))
#define FONT_MANAGER_IS_STANDARD_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW))
#define FONT_MANAGER_IS_STANDARD_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW))
#define FONT_MANAGER_STANDARD_TEXT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextViewClass))

typedef struct _FontManagerStandardTextView FontManagerStandardTextView;
typedef struct _FontManagerStandardTextViewClass FontManagerStandardTextViewClass;
typedef struct _FontManagerStandardTextViewPrivate FontManagerStandardTextViewPrivate;

#define FONT_MANAGER_TYPE_STATIC_TEXT_VIEW (font_manager_static_text_view_get_type ())
#define FONT_MANAGER_STATIC_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, FontManagerStaticTextView))
#define FONT_MANAGER_STATIC_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, FontManagerStaticTextViewClass))
#define FONT_MANAGER_IS_STATIC_TEXT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW))
#define FONT_MANAGER_IS_STATIC_TEXT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW))
#define FONT_MANAGER_STATIC_TEXT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, FontManagerStaticTextViewClass))

typedef struct _FontManagerStaticTextView FontManagerStaticTextView;
typedef struct _FontManagerStaticTextViewClass FontManagerStaticTextViewClass;
typedef struct _FontManagerStaticTextViewPrivate FontManagerStaticTextViewPrivate;
#define _gtk_target_list_unref0(var) ((var == NULL) ? NULL : (var = (gtk_target_list_unref (var), NULL)))

struct _FontManagerStandardTextTagTable {
	GtkTextTagTable parent_instance;
	FontManagerStandardTextTagTablePrivate * priv;
};

struct _FontManagerStandardTextTagTableClass {
	GtkTextTagTableClass parent_class;
};

struct _FontManagerStandardTextTagTablePrivate {
	gchar** defaults;
	gint defaults_length1;
	gint _defaults_size_;
};

struct _FontManagerStandardTextView {
	GtkScrolledWindow parent_instance;
	FontManagerStandardTextViewPrivate * priv;
};

struct _FontManagerStandardTextViewClass {
	GtkScrolledWindowClass parent_class;
	gboolean (*on_event) (FontManagerStandardTextView* self, GdkEvent* event);
};

struct _FontManagerStandardTextViewPrivate {
	GtkTextView* _view;
};

struct _FontManagerStaticTextView {
	FontManagerStandardTextView parent_instance;
	FontManagerStaticTextViewPrivate * priv;
};

struct _FontManagerStaticTextViewClass {
	FontManagerStandardTextViewClass parent_class;
};


static gpointer font_manager_standard_text_tag_table_parent_class = NULL;
static gpointer font_manager_standard_text_view_parent_class = NULL;
static gpointer font_manager_static_text_view_parent_class = NULL;

GType font_manager_standard_text_tag_table_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTablePrivate))
enum  {
	FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_DUMMY_PROPERTY
};
FontManagerStandardTextTagTable* font_manager_standard_text_tag_table_new (void);
FontManagerStandardTextTagTable* font_manager_standard_text_tag_table_construct (GType object_type);
static GObject * font_manager_standard_text_tag_table_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void font_manager_standard_text_tag_table_finalize (GObject* obj);
GType font_manager_standard_text_view_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_STANDARD_TEXT_VIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextViewPrivate))
enum  {
	FONT_MANAGER_STANDARD_TEXT_VIEW_DUMMY_PROPERTY,
	FONT_MANAGER_STANDARD_TEXT_VIEW_VIEW,
	FONT_MANAGER_STANDARD_TEXT_VIEW_BUFFER,
	FONT_MANAGER_STANDARD_TEXT_VIEW_TAG_TABLE
};
static void font_manager_standard_text_view_real_show (GtkWidget* base);
GtkTextView* font_manager_standard_text_view_get_view (FontManagerStandardTextView* self);
FontManagerStandardTextView* font_manager_standard_text_view_new (FontManagerStandardTextTagTable* tag_table);
FontManagerStandardTextView* font_manager_standard_text_view_construct (GType object_type, FontManagerStandardTextTagTable* tag_table);
void font_manager_standard_text_view_set_tag_table (FontManagerStandardTextView* self, GtkTextTagTable* value);
gchar* font_manager_standard_text_view_get_buffer_text (FontManagerStandardTextView* self);
gboolean font_manager_standard_text_view_on_event (FontManagerStandardTextView* self, GdkEvent* event);
static gboolean font_manager_standard_text_view_real_on_event (FontManagerStandardTextView* self, GdkEvent* event);
static void font_manager_standard_text_view_set_view (FontManagerStandardTextView* self, GtkTextView* value);
GtkTextBuffer* font_manager_standard_text_view_get_buffer (FontManagerStandardTextView* self);
void font_manager_standard_text_view_set_buffer (FontManagerStandardTextView* self, GtkTextBuffer* value);
GtkTextTagTable* font_manager_standard_text_view_get_tag_table (FontManagerStandardTextView* self);
static void g_cclosure_user_marshal_VOID__OBJECT_BOXED (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static GObject * font_manager_standard_text_view_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void font_manager_standard_text_view_finalize (GObject* obj);
static void _vala_font_manager_standard_text_view_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_manager_standard_text_view_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
GType font_manager_static_text_view_get_type (void) G_GNUC_CONST;
enum  {
	FONT_MANAGER_STATIC_TEXT_VIEW_DUMMY_PROPERTY
};
FontManagerStaticTextView* font_manager_static_text_view_new (FontManagerStandardTextTagTable* tag_table);
FontManagerStaticTextView* font_manager_static_text_view_construct (GType object_type, FontManagerStandardTextTagTable* tag_table);
static gboolean _font_manager_standard_text_view_on_event_gtk_widget_event (GtkWidget* _sender, GdkEvent* event, gpointer self);
static gboolean font_manager_static_text_view_real_on_event (FontManagerStandardTextView* base, GdkEvent* event);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


FontManagerStandardTextTagTable* font_manager_standard_text_tag_table_construct (GType object_type) {
	FontManagerStandardTextTagTable * self = NULL;
	self = (FontManagerStandardTextTagTable*) g_object_new (object_type, NULL);
	return self;
}


FontManagerStandardTextTagTable* font_manager_standard_text_tag_table_new (void) {
	return font_manager_standard_text_tag_table_construct (FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static GObject * font_manager_standard_text_tag_table_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	FontManagerStandardTextTagTable * self;
	gchar** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	GtkTextTag* sp = NULL;
	gchar** _tmp5_ = NULL;
	gint _tmp5__length1 = 0;
	const gchar* _tmp6_ = NULL;
	GtkTextTag* _tmp7_ = NULL;
	GtkTextTag* _tmp8_ = NULL;
	GtkTextTag* _tmp9_ = NULL;
	GtkTextTag* _tmp10_ = NULL;
	GtkTextTag* _tmp11_ = NULL;
	parent_class = G_OBJECT_CLASS (font_manager_standard_text_tag_table_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTable);
	_tmp0_ = self->priv->defaults;
	_tmp0__length1 = self->priv->defaults_length1;
	{
		gchar** tag_collection = NULL;
		gint tag_collection_length1 = 0;
		gint _tag_collection_size_ = 0;
		gint tag_it = 0;
		tag_collection = _tmp0_;
		tag_collection_length1 = _tmp0__length1;
		for (tag_it = 0; tag_it < _tmp0__length1; tag_it = tag_it + 1) {
			gchar* _tmp1_ = NULL;
			gchar* tag = NULL;
			_tmp1_ = g_strdup (tag_collection[tag_it]);
			tag = _tmp1_;
			{
				const gchar* _tmp2_ = NULL;
				GtkTextTag* _tmp3_ = NULL;
				GtkTextTag* _tmp4_ = NULL;
				_tmp2_ = tag;
				_tmp3_ = gtk_text_tag_new (_tmp2_);
				_tmp4_ = _tmp3_;
				gtk_text_tag_table_add ((GtkTextTagTable*) self, _tmp4_);
				_g_object_unref0 (_tmp4_);
				_g_free0 (tag);
			}
		}
	}
	_tmp5_ = self->priv->defaults;
	_tmp5__length1 = self->priv->defaults_length1;
	_tmp6_ = _tmp5_[2];
	_tmp7_ = gtk_text_tag_table_lookup ((GtkTextTagTable*) self, _tmp6_);
	_tmp8_ = _g_object_ref0 (_tmp7_);
	sp = _tmp8_;
	_tmp9_ = sp;
	g_object_set (_tmp9_, "family", "Monospace", NULL);
	_tmp10_ = sp;
	g_object_set (_tmp10_, "rise", 1250, NULL);
	_tmp11_ = sp;
	g_object_set (_tmp11_, "size-points", 6.0, NULL);
	_g_object_unref0 (sp);
	return obj;
}


static void font_manager_standard_text_tag_table_class_init (FontManagerStandardTextTagTableClass * klass) {
	font_manager_standard_text_tag_table_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerStandardTextTagTablePrivate));
	G_OBJECT_CLASS (klass)->constructor = font_manager_standard_text_tag_table_constructor;
	G_OBJECT_CLASS (klass)->finalize = font_manager_standard_text_tag_table_finalize;
}


static void font_manager_standard_text_tag_table_instance_init (FontManagerStandardTextTagTable * self) {
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	self->priv = FONT_MANAGER_STANDARD_TEXT_TAG_TABLE_GET_PRIVATE (self);
	_tmp0_ = g_strdup ("FontDescription");
	_tmp1_ = g_strdup ("FontSize");
	_tmp2_ = g_strdup ("SizePoint");
	_tmp3_ = g_new0 (gchar*, 3 + 1);
	_tmp3_[0] = _tmp0_;
	_tmp3_[1] = _tmp1_;
	_tmp3_[2] = _tmp2_;
	self->priv->defaults = _tmp3_;
	self->priv->defaults_length1 = 3;
	self->priv->_defaults_size_ = self->priv->defaults_length1;
}


static void font_manager_standard_text_tag_table_finalize (GObject* obj) {
	FontManagerStandardTextTagTable * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_STANDARD_TEXT_TAG_TABLE, FontManagerStandardTextTagTable);
	self->priv->defaults = (_vala_array_free (self->priv->defaults, self->priv->defaults_length1, (GDestroyNotify) g_free), NULL);
	G_OBJECT_CLASS (font_manager_standard_text_tag_table_parent_class)->finalize (obj);
}


GType font_manager_standard_text_tag_table_get_type (void) {
	static volatile gsize font_manager_standard_text_tag_table_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_standard_text_tag_table_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerStandardTextTagTableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_standard_text_tag_table_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerStandardTextTagTable), 0, (GInstanceInitFunc) font_manager_standard_text_tag_table_instance_init, NULL };
		GType font_manager_standard_text_tag_table_type_id;
		font_manager_standard_text_tag_table_type_id = g_type_register_static (gtk_text_tag_table_get_type (), "FontManagerStandardTextTagTable", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_standard_text_tag_table_type_id__volatile, font_manager_standard_text_tag_table_type_id);
	}
	return font_manager_standard_text_tag_table_type_id__volatile;
}


static void font_manager_standard_text_view_real_show (GtkWidget* base) {
	FontManagerStandardTextView * self;
	GtkTextView* _tmp0_ = NULL;
	self = (FontManagerStandardTextView*) base;
	_tmp0_ = self->priv->_view;
	gtk_widget_show ((GtkWidget*) _tmp0_);
	GTK_WIDGET_CLASS (font_manager_standard_text_view_parent_class)->show ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_scrolled_window_get_type (), GtkScrolledWindow));
	return;
}


FontManagerStandardTextView* font_manager_standard_text_view_construct (GType object_type, FontManagerStandardTextTagTable* tag_table) {
	FontManagerStandardTextView * self = NULL;
	FontManagerStandardTextTagTable* _tmp0_ = NULL;
	self = (FontManagerStandardTextView*) g_object_new (object_type, NULL);
	_tmp0_ = tag_table;
	font_manager_standard_text_view_set_tag_table (self, (GtkTextTagTable*) _tmp0_);
	return self;
}


FontManagerStandardTextView* font_manager_standard_text_view_new (FontManagerStandardTextTagTable* tag_table) {
	return font_manager_standard_text_view_construct (FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, tag_table);
}


gchar* font_manager_standard_text_view_get_buffer_text (FontManagerStandardTextView* self) {
	gchar* result = NULL;
	GtkTextIter start = {0};
	GtkTextIter end = {0};
	GtkTextView* _tmp0_ = NULL;
	GtkTextBuffer* _tmp1_ = NULL;
	GtkTextIter _tmp2_ = {0};
	GtkTextIter _tmp3_ = {0};
	GtkTextView* _tmp4_ = NULL;
	GtkTextBuffer* _tmp5_ = NULL;
	GtkTextIter _tmp6_ = {0};
	GtkTextIter _tmp7_ = {0};
	gchar* _tmp8_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_view;
	_tmp1_ = gtk_text_view_get_buffer (_tmp0_);
	gtk_text_buffer_get_bounds (_tmp1_, &_tmp2_, &_tmp3_);
	start = _tmp2_;
	end = _tmp3_;
	_tmp4_ = self->priv->_view;
	_tmp5_ = gtk_text_view_get_buffer (_tmp4_);
	_tmp6_ = start;
	_tmp7_ = end;
	_tmp8_ = gtk_text_buffer_get_text (_tmp5_, &_tmp6_, &_tmp7_, FALSE);
	result = _tmp8_;
	return result;
}


static gboolean font_manager_standard_text_view_real_on_event (FontManagerStandardTextView* self, GdkEvent* event) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	GdkEvent* _tmp1_ = NULL;
	GdkEventType _tmp2_ = 0;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp1_ = event;
	_tmp2_ = _tmp1_->type;
	if (_tmp2_ == GDK_BUTTON_PRESS) {
		GdkEvent* _tmp3_ = NULL;
		GdkEventButton* _tmp4_ = NULL;
		GdkEventButton* _tmp5_ = NULL;
		guint _tmp6_ = 0U;
		_tmp3_ = event;
		_tmp4_ = (GdkEventButton *) (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = _tmp5_->button;
		_tmp0_ = _tmp6_ == ((guint) 3);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		GdkEvent* _tmp7_ = NULL;
		GdkEventButton* _tmp8_ = NULL;
		GdkEventButton* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
		const gchar* _tmp11_ = NULL;
		_tmp7_ = event;
		_tmp8_ = (GdkEventButton *) (_tmp7_);
		_tmp9_ = _tmp8_;
		g_signal_emit_by_name (self, "menu-request", (GtkWidget*) self, _tmp9_);
		_tmp10_ = gtk_widget_get_name ((GtkWidget*) self);
		_tmp11_ = _tmp10_;
		g_debug ("TextViews.vala:110: Context menu request - %s", _tmp11_);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


gboolean font_manager_standard_text_view_on_event (FontManagerStandardTextView* self, GdkEvent* event) {
	g_return_val_if_fail (self != NULL, FALSE);
	return FONT_MANAGER_STANDARD_TEXT_VIEW_GET_CLASS (self)->on_event (self, event);
}


GtkTextView* font_manager_standard_text_view_get_view (FontManagerStandardTextView* self) {
	GtkTextView* result;
	GtkTextView* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_view;
	result = _tmp0_;
	return result;
}


static void font_manager_standard_text_view_set_view (FontManagerStandardTextView* self, GtkTextView* value) {
	GtkTextView* _tmp0_ = NULL;
	GtkTextView* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_view);
	self->priv->_view = _tmp1_;
	g_object_notify ((GObject *) self, "view");
}


GtkTextBuffer* font_manager_standard_text_view_get_buffer (FontManagerStandardTextView* self) {
	GtkTextBuffer* result;
	GtkTextView* _tmp0_ = NULL;
	GtkTextBuffer* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_view;
	_tmp1_ = gtk_text_view_get_buffer (_tmp0_);
	result = _tmp1_;
	return result;
}


void font_manager_standard_text_view_set_buffer (FontManagerStandardTextView* self, GtkTextBuffer* value) {
	GtkTextView* _tmp0_ = NULL;
	GtkTextBuffer* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_view;
	_tmp1_ = value;
	gtk_text_view_set_buffer (_tmp0_, _tmp1_);
	g_object_notify ((GObject *) self, "buffer");
}


GtkTextTagTable* font_manager_standard_text_view_get_tag_table (FontManagerStandardTextView* self) {
	GtkTextTagTable* result;
	GtkTextBuffer* _tmp0_ = NULL;
	GtkTextBuffer* _tmp1_ = NULL;
	GtkTextTagTable* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = font_manager_standard_text_view_get_buffer (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = gtk_text_buffer_get_tag_table (_tmp1_);
	result = _tmp2_;
	return result;
}


void font_manager_standard_text_view_set_tag_table (FontManagerStandardTextView* self, GtkTextTagTable* value) {
	GtkTextTagTable* _tmp0_ = NULL;
	GtkTextBuffer* _tmp1_ = NULL;
	GtkTextBuffer* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = gtk_text_buffer_new (_tmp0_);
	_tmp2_ = _tmp1_;
	font_manager_standard_text_view_set_buffer (self, _tmp2_);
	_g_object_unref0 (_tmp2_);
	g_object_notify ((GObject *) self, "tag-table");
}


static void g_cclosure_user_marshal_VOID__OBJECT_BOXED (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__OBJECT_BOXED) (gpointer data1, gpointer arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_VOID__OBJECT_BOXED callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__OBJECT_BOXED) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_object (param_values + 1), g_value_get_boxed (param_values + 2), data2);
}


static GObject * font_manager_standard_text_view_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	FontManagerStandardTextView * self;
	GtkTextView* _tmp0_ = NULL;
	GtkTextView* _tmp1_ = NULL;
	GtkTextView* _tmp2_ = NULL;
	GtkTextView* _tmp3_ = NULL;
	GtkTextView* _tmp4_ = NULL;
	GtkTextView* _tmp5_ = NULL;
	GtkTextView* _tmp6_ = NULL;
	GtkTextView* _tmp7_ = NULL;
	GtkTextView* _tmp8_ = NULL;
	GtkTextView* _tmp9_ = NULL;
	GtkStyleContext* _tmp10_ = NULL;
	GtkTextView* _tmp11_ = NULL;
	parent_class = G_OBJECT_CLASS (font_manager_standard_text_view_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView);
	_tmp0_ = (GtkTextView*) gtk_text_view_new ();
	g_object_ref_sink (_tmp0_);
	_tmp1_ = _tmp0_;
	font_manager_standard_text_view_set_view (self, _tmp1_);
	_g_object_unref0 (_tmp1_);
	_tmp2_ = self->priv->_view;
	gtk_text_view_set_left_margin (_tmp2_, 6);
	_tmp3_ = self->priv->_view;
	gtk_text_view_set_right_margin (_tmp3_, 6);
	_tmp4_ = self->priv->_view;
	gtk_widget_set_margin_top ((GtkWidget*) _tmp4_, 6);
	_tmp5_ = self->priv->_view;
	gtk_text_view_set_editable (_tmp5_, FALSE);
	_tmp6_ = self->priv->_view;
	gtk_text_view_set_cursor_visible (_tmp6_, FALSE);
	_tmp7_ = self->priv->_view;
	gtk_text_view_set_accepts_tab (_tmp7_, FALSE);
	_tmp8_ = self->priv->_view;
	gtk_text_view_set_overwrite (_tmp8_, FALSE);
	_tmp9_ = self->priv->_view;
	gtk_text_view_set_wrap_mode (_tmp9_, GTK_WRAP_WORD_CHAR);
	_tmp10_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp10_, GTK_STYLE_CLASS_VIEW);
	g_object_set ((GtkWidget*) self, "expand", TRUE, NULL);
	_tmp11_ = self->priv->_view;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp11_);
	return obj;
}


static void font_manager_standard_text_view_class_init (FontManagerStandardTextViewClass * klass) {
	font_manager_standard_text_view_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerStandardTextViewPrivate));
	((GtkWidgetClass *) klass)->show = font_manager_standard_text_view_real_show;
	((FontManagerStandardTextViewClass *) klass)->on_event = font_manager_standard_text_view_real_on_event;
	G_OBJECT_CLASS (klass)->get_property = _vala_font_manager_standard_text_view_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_manager_standard_text_view_set_property;
	G_OBJECT_CLASS (klass)->constructor = font_manager_standard_text_view_constructor;
	G_OBJECT_CLASS (klass)->finalize = font_manager_standard_text_view_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_STANDARD_TEXT_VIEW_VIEW, g_param_spec_object ("view", "view", "view", gtk_text_view_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_STANDARD_TEXT_VIEW_BUFFER, g_param_spec_object ("buffer", "buffer", "buffer", gtk_text_buffer_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_STANDARD_TEXT_VIEW_TAG_TABLE, g_param_spec_object ("tag-table", "tag-table", "tag-table", gtk_text_tag_table_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_signal_new ("menu_request", FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__OBJECT_BOXED, G_TYPE_NONE, 2, gtk_widget_get_type (), gdk_event_get_type ());
}


static void font_manager_standard_text_view_instance_init (FontManagerStandardTextView * self) {
	self->priv = FONT_MANAGER_STANDARD_TEXT_VIEW_GET_PRIVATE (self);
}


static void font_manager_standard_text_view_finalize (GObject* obj) {
	FontManagerStandardTextView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView);
	_g_object_unref0 (self->priv->_view);
	G_OBJECT_CLASS (font_manager_standard_text_view_parent_class)->finalize (obj);
}


GType font_manager_standard_text_view_get_type (void) {
	static volatile gsize font_manager_standard_text_view_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_standard_text_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerStandardTextViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_standard_text_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerStandardTextView), 0, (GInstanceInitFunc) font_manager_standard_text_view_instance_init, NULL };
		GType font_manager_standard_text_view_type_id;
		font_manager_standard_text_view_type_id = g_type_register_static (gtk_scrolled_window_get_type (), "FontManagerStandardTextView", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_standard_text_view_type_id__volatile, font_manager_standard_text_view_type_id);
	}
	return font_manager_standard_text_view_type_id__volatile;
}


static void _vala_font_manager_standard_text_view_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontManagerStandardTextView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView);
	switch (property_id) {
		case FONT_MANAGER_STANDARD_TEXT_VIEW_VIEW:
		g_value_set_object (value, font_manager_standard_text_view_get_view (self));
		break;
		case FONT_MANAGER_STANDARD_TEXT_VIEW_BUFFER:
		g_value_set_object (value, font_manager_standard_text_view_get_buffer (self));
		break;
		case FONT_MANAGER_STANDARD_TEXT_VIEW_TAG_TABLE:
		g_value_set_object (value, font_manager_standard_text_view_get_tag_table (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_manager_standard_text_view_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontManagerStandardTextView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView);
	switch (property_id) {
		case FONT_MANAGER_STANDARD_TEXT_VIEW_VIEW:
		font_manager_standard_text_view_set_view (self, g_value_get_object (value));
		break;
		case FONT_MANAGER_STANDARD_TEXT_VIEW_BUFFER:
		font_manager_standard_text_view_set_buffer (self, g_value_get_object (value));
		break;
		case FONT_MANAGER_STANDARD_TEXT_VIEW_TAG_TABLE:
		font_manager_standard_text_view_set_tag_table (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static gboolean _font_manager_standard_text_view_on_event_gtk_widget_event (GtkWidget* _sender, GdkEvent* event, gpointer self) {
	gboolean result;
	result = font_manager_standard_text_view_on_event ((FontManagerStandardTextView*) self, event);
	return result;
}


FontManagerStaticTextView* font_manager_static_text_view_construct (GType object_type, FontManagerStandardTextTagTable* tag_table) {
	FontManagerStaticTextView * self = NULL;
	FontManagerStandardTextTagTable* _tmp0_ = NULL;
	GtkTextView* _tmp1_ = NULL;
	GtkTextView* _tmp2_ = NULL;
	GtkTargetList* list = NULL;
	GtkTextView* _tmp3_ = NULL;
	GtkTextView* _tmp4_ = NULL;
	_tmp0_ = tag_table;
	self = (FontManagerStaticTextView*) font_manager_standard_text_view_construct (object_type, _tmp0_);
	_tmp1_ = font_manager_standard_text_view_get_view ((FontManagerStandardTextView*) self);
	_tmp2_ = _tmp1_;
	g_signal_connect_object ((GtkWidget*) _tmp2_, "event", (GCallback) _font_manager_standard_text_view_on_event_gtk_widget_event, (FontManagerStandardTextView*) self, 0);
	list = NULL;
	_tmp3_ = font_manager_standard_text_view_get_view ((FontManagerStandardTextView*) self);
	_tmp4_ = _tmp3_;
	gtk_drag_dest_set_target_list ((GtkWidget*) _tmp4_, list);
	_gtk_target_list_unref0 (list);
	return self;
}


FontManagerStaticTextView* font_manager_static_text_view_new (FontManagerStandardTextTagTable* tag_table) {
	return font_manager_static_text_view_construct (FONT_MANAGER_TYPE_STATIC_TEXT_VIEW, tag_table);
}


static gboolean font_manager_static_text_view_real_on_event (FontManagerStandardTextView* base, GdkEvent* event) {
	FontManagerStaticTextView * self;
	gboolean result = FALSE;
	GdkEvent* _tmp0_ = NULL;
	GdkEventType _tmp1_ = 0;
	gboolean _tmp2_ = FALSE;
	GdkEvent* _tmp3_ = NULL;
	GdkEventType _tmp4_ = 0;
	GtkTextView* _tmp11_ = NULL;
	GtkTextView* _tmp12_ = NULL;
	GdkWindow* _tmp13_ = NULL;
	self = (FontManagerStaticTextView*) base;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = event;
	_tmp1_ = _tmp0_->type;
	if (_tmp1_ == GDK_SCROLL) {
		result = FALSE;
		return result;
	}
	_tmp3_ = event;
	_tmp4_ = _tmp3_->type;
	if (_tmp4_ == GDK_BUTTON_PRESS) {
		GdkEvent* _tmp5_ = NULL;
		GdkEventButton* _tmp6_ = NULL;
		GdkEventButton* _tmp7_ = NULL;
		guint _tmp8_ = 0U;
		_tmp5_ = event;
		_tmp6_ = (GdkEventButton *) (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp8_ = _tmp7_->button;
		_tmp2_ = _tmp8_ == ((guint) 3);
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		GdkEvent* _tmp9_ = NULL;
		gboolean _tmp10_ = FALSE;
		_tmp9_ = event;
		_tmp10_ = FONT_MANAGER_STANDARD_TEXT_VIEW_CLASS (font_manager_static_text_view_parent_class)->on_event (G_TYPE_CHECK_INSTANCE_CAST (self, FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, FontManagerStandardTextView), _tmp9_);
		result = _tmp10_;
		return result;
	}
	_tmp11_ = font_manager_standard_text_view_get_view ((FontManagerStandardTextView*) self);
	_tmp12_ = _tmp11_;
	_tmp13_ = gtk_text_view_get_window (G_TYPE_CHECK_INSTANCE_CAST (_tmp12_, gtk_text_view_get_type (), GtkTextView), GTK_TEXT_WINDOW_TEXT);
	gdk_window_set_cursor (_tmp13_, NULL);
	result = TRUE;
	return result;
}


static void font_manager_static_text_view_class_init (FontManagerStaticTextViewClass * klass) {
	font_manager_static_text_view_parent_class = g_type_class_peek_parent (klass);
	((FontManagerStandardTextViewClass *) klass)->on_event = font_manager_static_text_view_real_on_event;
}


static void font_manager_static_text_view_instance_init (FontManagerStaticTextView * self) {
}


GType font_manager_static_text_view_get_type (void) {
	static volatile gsize font_manager_static_text_view_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_static_text_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerStaticTextViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_static_text_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerStaticTextView), 0, (GInstanceInitFunc) font_manager_static_text_view_instance_init, NULL };
		GType font_manager_static_text_view_type_id;
		font_manager_static_text_view_type_id = g_type_register_static (FONT_MANAGER_TYPE_STANDARD_TEXT_VIEW, "FontManagerStaticTextView", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_static_text_view_type_id__volatile, font_manager_static_text_view_type_id);
	}
	return font_manager_static_text_view_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



