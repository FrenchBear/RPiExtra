/* ReactiveLabel.c generated by valac 0.26.1, the Vala compiler
 * generated from ReactiveLabel.vala, do not modify */

/* ReactiveLabel.vala
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
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_REACTIVE_LABEL (reactive_label_get_type ())
#define REACTIVE_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REACTIVE_LABEL, ReactiveLabel))
#define REACTIVE_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_REACTIVE_LABEL, ReactiveLabelClass))
#define IS_REACTIVE_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REACTIVE_LABEL))
#define IS_REACTIVE_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_REACTIVE_LABEL))
#define REACTIVE_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REACTIVE_LABEL, ReactiveLabelClass))

typedef struct _ReactiveLabel ReactiveLabel;
typedef struct _ReactiveLabelClass ReactiveLabelClass;
typedef struct _ReactiveLabelPrivate ReactiveLabelPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ReactiveLabel {
	GtkEventBox parent_instance;
	ReactiveLabelPrivate * priv;
};

struct _ReactiveLabelClass {
	GtkEventBoxClass parent_class;
};

struct _ReactiveLabelPrivate {
	GtkLabel* _label;
	GdkRGBA normal;
	GdkRGBA hover;
};


static gpointer reactive_label_parent_class = NULL;

GType reactive_label_get_type (void) G_GNUC_CONST;
#define REACTIVE_LABEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_REACTIVE_LABEL, ReactiveLabelPrivate))
enum  {
	REACTIVE_LABEL_DUMMY_PROPERTY,
	REACTIVE_LABEL_LABEL
};
ReactiveLabel* reactive_label_new (const gchar* str);
ReactiveLabel* reactive_label_construct (GType object_type, const gchar* str);
static void reactive_label_set_label (ReactiveLabel* self, GtkLabel* value);
GtkLabel* reactive_label_get_label (ReactiveLabel* self);
static void reactive_label_real_show (GtkWidget* base);
void reactive_label_set_markup (ReactiveLabel* self, const gchar* str);
static gboolean reactive_label_real_enter_notify_event (GtkWidget* base, GdkEventCrossing* event);
static gboolean reactive_label_real_leave_notify_event (GtkWidget* base, GdkEventCrossing* event);
static void reactive_label_real_style_updated (GtkWidget* base);
static gboolean reactive_label_real_button_press_event (GtkWidget* base, GdkEventButton* event);
static void reactive_label_finalize (GObject* obj);
static void _vala_reactive_label_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_reactive_label_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


ReactiveLabel* reactive_label_construct (GType object_type, const gchar* str) {
	ReactiveLabel * self = NULL;
	const gchar* _tmp0_ = NULL;
	GtkLabel* _tmp1_ = NULL;
	GtkLabel* _tmp2_ = NULL;
	GtkLabel* _tmp3_ = NULL;
	self = (ReactiveLabel*) g_object_new (object_type, NULL);
	_tmp0_ = str;
	_tmp1_ = (GtkLabel*) gtk_label_new (_tmp0_);
	g_object_ref_sink (_tmp1_);
	_tmp2_ = _tmp1_;
	reactive_label_set_label (self, _tmp2_);
	_g_object_unref0 (_tmp2_);
	_tmp3_ = self->priv->_label;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp3_);
	g_signal_emit_by_name ((GtkWidget*) self, "style-updated");
	return self;
}


ReactiveLabel* reactive_label_new (const gchar* str) {
	return reactive_label_construct (TYPE_REACTIVE_LABEL, str);
}


static void reactive_label_real_show (GtkWidget* base) {
	ReactiveLabel * self;
	GtkLabel* _tmp0_ = NULL;
	self = (ReactiveLabel*) base;
	_tmp0_ = self->priv->_label;
	gtk_widget_show ((GtkWidget*) _tmp0_);
	GTK_WIDGET_CLASS (reactive_label_parent_class)->show ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_event_box_get_type (), GtkEventBox));
	return;
}


void reactive_label_set_markup (ReactiveLabel* self, const gchar* str) {
	GtkLabel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (str != NULL);
	_tmp0_ = self->priv->_label;
	_tmp1_ = str;
	gtk_label_set_markup (_tmp0_, _tmp1_);
	return;
}


static gboolean reactive_label_real_enter_notify_event (GtkWidget* base, GdkEventCrossing* event) {
	ReactiveLabel * self;
	gboolean result = FALSE;
	GtkLabel* _tmp0_ = NULL;
	GdkRGBA _tmp1_ = {0};
	self = (ReactiveLabel*) base;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = self->priv->_label;
	_tmp1_ = self->priv->hover;
	gtk_widget_override_color ((GtkWidget*) _tmp0_, GTK_STATE_FLAG_NORMAL, &_tmp1_);
	result = FALSE;
	return result;
}


static gboolean reactive_label_real_leave_notify_event (GtkWidget* base, GdkEventCrossing* event) {
	ReactiveLabel * self;
	gboolean result = FALSE;
	GtkLabel* _tmp0_ = NULL;
	GdkRGBA _tmp1_ = {0};
	self = (ReactiveLabel*) base;
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = self->priv->_label;
	_tmp1_ = self->priv->normal;
	gtk_widget_override_color ((GtkWidget*) _tmp0_, GTK_STATE_FLAG_NORMAL, &_tmp1_);
	result = FALSE;
	return result;
}


static void reactive_label_real_style_updated (GtkWidget* base) {
	ReactiveLabel * self;
	GtkStyleContext* _tmp0_ = NULL;
	GdkRGBA _tmp1_ = {0};
	GdkRGBA _tmp2_ = {0};
	GtkLabel* _tmp3_ = NULL;
	GdkRGBA _tmp4_ = {0};
	self = (ReactiveLabel*) base;
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_get_color (_tmp0_, GTK_STATE_FLAG_NORMAL, &_tmp1_);
	self->priv->hover = _tmp1_;
	_tmp2_ = self->priv->hover;
	self->priv->normal = _tmp2_;
	self->priv->normal.alpha = 0.65;
	_tmp3_ = self->priv->_label;
	_tmp4_ = self->priv->normal;
	gtk_widget_override_color ((GtkWidget*) _tmp3_, GTK_STATE_FLAG_NORMAL, &_tmp4_);
	return;
}


static gboolean reactive_label_real_button_press_event (GtkWidget* base, GdkEventButton* event) {
	ReactiveLabel * self;
	gboolean result = FALSE;
	self = (ReactiveLabel*) base;
	g_return_val_if_fail (event != NULL, FALSE);
	g_signal_emit_by_name (self, "clicked");
	result = FALSE;
	return result;
}


GtkLabel* reactive_label_get_label (ReactiveLabel* self) {
	GtkLabel* result;
	GtkLabel* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_label;
	result = _tmp0_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void reactive_label_set_label (ReactiveLabel* self, GtkLabel* value) {
	GtkLabel* _tmp0_ = NULL;
	GtkLabel* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_label);
	self->priv->_label = _tmp1_;
	g_object_notify ((GObject *) self, "label");
}


static void reactive_label_class_init (ReactiveLabelClass * klass) {
	reactive_label_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ReactiveLabelPrivate));
	((GtkWidgetClass *) klass)->show = reactive_label_real_show;
	((GtkWidgetClass *) klass)->enter_notify_event = reactive_label_real_enter_notify_event;
	((GtkWidgetClass *) klass)->leave_notify_event = reactive_label_real_leave_notify_event;
	((GtkWidgetClass *) klass)->style_updated = reactive_label_real_style_updated;
	((GtkWidgetClass *) klass)->button_press_event = reactive_label_real_button_press_event;
	G_OBJECT_CLASS (klass)->get_property = _vala_reactive_label_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_reactive_label_set_property;
	G_OBJECT_CLASS (klass)->finalize = reactive_label_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), REACTIVE_LABEL_LABEL, g_param_spec_object ("label", "label", "label", gtk_label_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_signal_new ("clicked", TYPE_REACTIVE_LABEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void reactive_label_instance_init (ReactiveLabel * self) {
	self->priv = REACTIVE_LABEL_GET_PRIVATE (self);
}


static void reactive_label_finalize (GObject* obj) {
	ReactiveLabel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_REACTIVE_LABEL, ReactiveLabel);
	_g_object_unref0 (self->priv->_label);
	G_OBJECT_CLASS (reactive_label_parent_class)->finalize (obj);
}


GType reactive_label_get_type (void) {
	static volatile gsize reactive_label_type_id__volatile = 0;
	if (g_once_init_enter (&reactive_label_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ReactiveLabelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) reactive_label_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ReactiveLabel), 0, (GInstanceInitFunc) reactive_label_instance_init, NULL };
		GType reactive_label_type_id;
		reactive_label_type_id = g_type_register_static (gtk_event_box_get_type (), "ReactiveLabel", &g_define_type_info, 0);
		g_once_init_leave (&reactive_label_type_id__volatile, reactive_label_type_id);
	}
	return reactive_label_type_id__volatile;
}


static void _vala_reactive_label_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ReactiveLabel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_REACTIVE_LABEL, ReactiveLabel);
	switch (property_id) {
		case REACTIVE_LABEL_LABEL:
		g_value_set_object (value, reactive_label_get_label (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_reactive_label_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ReactiveLabel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_REACTIVE_LABEL, ReactiveLabel);
	switch (property_id) {
		case REACTIVE_LABEL_LABEL:
		reactive_label_set_label (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


