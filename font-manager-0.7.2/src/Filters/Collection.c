/* Collection.c generated by valac 0.26.1, the Vala compiler
 * generated from Collection.vala, do not modify */

/* Collection.vala
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
#include <json-glib/json-glib.h>
#include <json-glib/json-gobject.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define TYPE_CACHEABLE (cacheable_get_type ())
#define CACHEABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CACHEABLE, Cacheable))
#define CACHEABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CACHEABLE, CacheableClass))
#define IS_CACHEABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CACHEABLE))
#define IS_CACHEABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CACHEABLE))
#define CACHEABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CACHEABLE, CacheableClass))

typedef struct _Cacheable Cacheable;
typedef struct _CacheableClass CacheableClass;
typedef struct _CacheablePrivate CacheablePrivate;

#define FONT_MANAGER_TYPE_FILTER (font_manager_filter_get_type ())
#define FONT_MANAGER_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_FILTER, FontManagerFilter))
#define FONT_MANAGER_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_FILTER, FontManagerFilterClass))
#define FONT_MANAGER_IS_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_FILTER))
#define FONT_MANAGER_IS_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_FILTER))
#define FONT_MANAGER_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_FILTER, FontManagerFilterClass))

typedef struct _FontManagerFilter FontManagerFilter;
typedef struct _FontManagerFilterClass FontManagerFilterClass;
typedef struct _FontManagerFilterPrivate FontManagerFilterPrivate;

#define FONT_MANAGER_TYPE_COLLECTION (font_manager_collection_get_type ())
#define FONT_MANAGER_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection))
#define FONT_MANAGER_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollectionClass))
#define FONT_MANAGER_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_COLLECTION))
#define FONT_MANAGER_IS_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_COLLECTION))
#define FONT_MANAGER_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollectionClass))

typedef struct _FontManagerCollection FontManagerCollection;
typedef struct _FontManagerCollectionClass FontManagerCollectionClass;
typedef struct _FontManagerCollectionPrivate FontManagerCollectionPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define FONT_CONFIG_TYPE_SELECTIONS (font_config_selections_get_type ())
#define FONT_CONFIG_SELECTIONS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_CONFIG_TYPE_SELECTIONS, FontConfigSelections))
#define FONT_CONFIG_SELECTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_CONFIG_TYPE_SELECTIONS, FontConfigSelectionsClass))
#define FONT_CONFIG_IS_SELECTIONS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_CONFIG_TYPE_SELECTIONS))
#define FONT_CONFIG_IS_SELECTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_CONFIG_TYPE_SELECTIONS))
#define FONT_CONFIG_SELECTIONS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_CONFIG_TYPE_SELECTIONS, FontConfigSelectionsClass))

typedef struct _FontConfigSelections FontConfigSelections;
typedef struct _FontConfigSelectionsClass FontConfigSelectionsClass;

#define FONT_CONFIG_TYPE_REJECT (font_config_reject_get_type ())
#define FONT_CONFIG_REJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_CONFIG_TYPE_REJECT, FontConfigReject))
#define FONT_CONFIG_REJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_CONFIG_TYPE_REJECT, FontConfigRejectClass))
#define FONT_CONFIG_IS_REJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_CONFIG_TYPE_REJECT))
#define FONT_CONFIG_IS_REJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_CONFIG_TYPE_REJECT))
#define FONT_CONFIG_REJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_CONFIG_TYPE_REJECT, FontConfigRejectClass))

typedef struct _FontConfigReject FontConfigReject;
typedef struct _FontConfigRejectClass FontConfigRejectClass;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _Block4Data Block4Data;
#define _json_object_unref0(var) ((var == NULL) ? NULL : (var = (json_object_unref (var), NULL)))
#define __vala_JsonNode_free0(var) ((var == NULL) ? NULL : (var = (_vala_JsonNode_free (var), NULL)))

struct _Cacheable {
	GObject parent_instance;
	CacheablePrivate * priv;
};

struct _CacheableClass {
	GObjectClass parent_class;
	gboolean (*deserialize_property) (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node);
	JsonNode* (*serialize_property) (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec);
};

struct _FontManagerFilter {
	Cacheable parent_instance;
	FontManagerFilterPrivate * priv;
};

struct _FontManagerFilterClass {
	CacheableClass parent_class;
};

struct _FontManagerCollection {
	FontManagerFilter parent_instance;
	FontManagerCollectionPrivate * priv;
};

struct _FontManagerCollectionClass {
	FontManagerFilterClass parent_class;
};

struct _FontManagerCollectionPrivate {
	GeeArrayList* _children;
};

struct _Block4Data {
	int _ref_count_;
	FontManagerCollection* self;
	GeeArrayList* res;
};


static gpointer font_manager_collection_parent_class = NULL;

GType cacheable_get_type (void) G_GNUC_CONST;
GType font_manager_filter_get_type (void) G_GNUC_CONST;
GType font_manager_collection_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_COLLECTION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollectionPrivate))
enum  {
	FONT_MANAGER_COLLECTION_DUMMY_PROPERTY,
	FONT_MANAGER_COLLECTION_CHILDREN
};
FontManagerCollection* font_manager_collection_new (const gchar* name);
FontManagerCollection* font_manager_collection_construct (GType object_type, const gchar* name);
void font_manager_filter_set_families (FontManagerFilter* self, GeeHashSet* value);
void font_manager_collection_set_children (FontManagerCollection* self, GeeArrayList* value);
gint font_manager_collection_size (FontManagerCollection* self);
GeeHashSet* font_manager_collection_get_full_contents (FontManagerCollection* self);
void font_manager_collection_clear_children (FontManagerCollection* self);
GeeArrayList* font_manager_collection_get_children (FontManagerCollection* self);
GType font_config_selections_get_type (void) G_GNUC_CONST;
GType font_config_reject_get_type (void) G_GNUC_CONST;
void font_manager_collection_set_active_from_fonts (FontManagerCollection* self, FontConfigReject* reject);
void font_manager_filter_set_active (FontManagerFilter* self, gboolean value);
GeeHashSet* font_manager_filter_get_families (FontManagerFilter* self);
static void font_manager_collection_add_child_contents (FontManagerCollection* self, FontManagerCollection* child, GeeHashSet* full_contents);
void font_manager_collection_update (FontManagerCollection* self, FontConfigReject* reject);
gboolean font_manager_filter_get_active (FontManagerFilter* self);
void font_config_selections_save (FontConfigSelections* self);
static gboolean font_manager_collection_real_deserialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node);
static Block4Data* block4_data_ref (Block4Data* _data4_);
static void block4_data_unref (void * _userdata_);
static void ___lambda41_ (Block4Data* _data4_, JsonObject* obj, const gchar* name, JsonNode* node);
static void ____lambda41__json_object_foreach (JsonObject* object, const gchar* member_name, JsonNode* member_node, gpointer self);
gboolean cacheable_deserialize_property (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node);
static JsonNode* font_manager_collection_real_serialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec);
const gchar* font_manager_filter_get_name (FontManagerFilter* self);
static void _vala_JsonNode_free (JsonNode* self);
JsonNode* cacheable_serialize_property (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec);
static void font_manager_collection_finalize (GObject* obj);
static void _vala_font_manager_collection_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_manager_collection_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


FontManagerCollection* font_manager_collection_construct (GType object_type, const gchar* name) {
	FontManagerCollection * self = NULL;
	const gchar* _tmp0_ = NULL;
	GeeHashSet* _tmp1_ = NULL;
	GeeHashSet* _tmp2_ = NULL;
	GeeArrayList* _tmp3_ = NULL;
	GeeArrayList* _tmp4_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = name;
	self = (FontManagerCollection*) g_object_new (object_type, "name", _tmp0_, NULL);
	_tmp1_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL);
	_tmp2_ = _tmp1_;
	font_manager_filter_set_families ((FontManagerFilter*) self, _tmp2_);
	_g_object_unref0 (_tmp2_);
	_tmp3_ = gee_array_list_new (FONT_MANAGER_TYPE_COLLECTION, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	_tmp4_ = _tmp3_;
	font_manager_collection_set_children (self, _tmp4_);
	_g_object_unref0 (_tmp4_);
	return self;
}


FontManagerCollection* font_manager_collection_new (const gchar* name) {
	return font_manager_collection_construct (FONT_MANAGER_TYPE_COLLECTION, name);
}


gint font_manager_collection_size (FontManagerCollection* self) {
	gint result = 0;
	GeeHashSet* _tmp0_ = NULL;
	GeeHashSet* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = font_manager_collection_get_full_contents (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void font_manager_collection_clear_children (FontManagerCollection* self) {
	GeeArrayList* _tmp12_ = NULL;
	g_return_if_fail (self != NULL);
	{
		GeeArrayList* _child_list = NULL;
		GeeArrayList* _tmp0_ = NULL;
		GeeArrayList* _tmp1_ = NULL;
		gint _child_size = 0;
		GeeArrayList* _tmp2_ = NULL;
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		gint _child_index = 0;
		_tmp0_ = self->priv->_children;
		_tmp1_ = _g_object_ref0 (_tmp0_);
		_child_list = _tmp1_;
		_tmp2_ = _child_list;
		_tmp3_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_child_size = _tmp4_;
		_child_index = -1;
		while (TRUE) {
			gint _tmp5_ = 0;
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			FontManagerCollection* child = NULL;
			GeeArrayList* _tmp8_ = NULL;
			gint _tmp9_ = 0;
			gpointer _tmp10_ = NULL;
			FontManagerCollection* _tmp11_ = NULL;
			_tmp5_ = _child_index;
			_child_index = _tmp5_ + 1;
			_tmp6_ = _child_index;
			_tmp7_ = _child_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _child_list;
			_tmp9_ = _child_index;
			_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) _tmp8_, _tmp9_);
			child = (FontManagerCollection*) _tmp10_;
			_tmp11_ = child;
			font_manager_collection_clear_children (_tmp11_);
			_g_object_unref0 (child);
		}
		_g_object_unref0 (_child_list);
	}
	_tmp12_ = self->priv->_children;
	gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp12_);
	return;
}


void font_manager_collection_set_active_from_fonts (FontManagerCollection* self, FontConfigReject* reject) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (reject != NULL);
	font_manager_filter_set_active ((FontManagerFilter*) self, FALSE);
	{
		GeeIterator* _family_it = NULL;
		GeeHashSet* _tmp0_ = NULL;
		GeeHashSet* _tmp1_ = NULL;
		GeeIterator* _tmp2_ = NULL;
		_tmp0_ = font_manager_filter_get_families ((FontManagerFilter*) self);
		_tmp1_ = _tmp0_;
		_tmp2_ = gee_abstract_collection_iterator ((GeeAbstractCollection*) _tmp1_);
		_family_it = _tmp2_;
		while (TRUE) {
			GeeIterator* _tmp3_ = NULL;
			gboolean _tmp4_ = FALSE;
			gchar* family = NULL;
			GeeIterator* _tmp5_ = NULL;
			gpointer _tmp6_ = NULL;
			FontConfigReject* _tmp7_ = NULL;
			const gchar* _tmp8_ = NULL;
			gboolean _tmp9_ = FALSE;
			_tmp3_ = _family_it;
			_tmp4_ = gee_iterator_next (_tmp3_);
			if (!_tmp4_) {
				break;
			}
			_tmp5_ = _family_it;
			_tmp6_ = gee_iterator_get (_tmp5_);
			family = (gchar*) _tmp6_;
			_tmp7_ = reject;
			_tmp8_ = family;
			_tmp9_ = gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp7_, _tmp8_);
			if (!_tmp9_) {
				font_manager_filter_set_active ((FontManagerFilter*) self, TRUE);
				_g_free0 (family);
				break;
			}
			_g_free0 (family);
		}
		_g_object_unref0 (_family_it);
	}
	{
		GeeArrayList* _child_list = NULL;
		GeeArrayList* _tmp10_ = NULL;
		GeeArrayList* _tmp11_ = NULL;
		gint _child_size = 0;
		GeeArrayList* _tmp12_ = NULL;
		gint _tmp13_ = 0;
		gint _tmp14_ = 0;
		gint _child_index = 0;
		_tmp10_ = self->priv->_children;
		_tmp11_ = _g_object_ref0 (_tmp10_);
		_child_list = _tmp11_;
		_tmp12_ = _child_list;
		_tmp13_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp12_);
		_tmp14_ = _tmp13_;
		_child_size = _tmp14_;
		_child_index = -1;
		while (TRUE) {
			gint _tmp15_ = 0;
			gint _tmp16_ = 0;
			gint _tmp17_ = 0;
			FontManagerCollection* child = NULL;
			GeeArrayList* _tmp18_ = NULL;
			gint _tmp19_ = 0;
			gpointer _tmp20_ = NULL;
			FontManagerCollection* _tmp21_ = NULL;
			FontConfigReject* _tmp22_ = NULL;
			_tmp15_ = _child_index;
			_child_index = _tmp15_ + 1;
			_tmp16_ = _child_index;
			_tmp17_ = _child_size;
			if (!(_tmp16_ < _tmp17_)) {
				break;
			}
			_tmp18_ = _child_list;
			_tmp19_ = _child_index;
			_tmp20_ = gee_abstract_list_get ((GeeAbstractList*) _tmp18_, _tmp19_);
			child = (FontManagerCollection*) _tmp20_;
			_tmp21_ = child;
			_tmp22_ = reject;
			font_manager_collection_set_active_from_fonts (_tmp21_, _tmp22_);
			_g_object_unref0 (child);
		}
		_g_object_unref0 (_child_list);
	}
	return;
}


static void font_manager_collection_add_child_contents (FontManagerCollection* self, FontManagerCollection* child, GeeHashSet* full_contents) {
	GeeHashSet* _tmp0_ = NULL;
	FontManagerCollection* _tmp1_ = NULL;
	GeeHashSet* _tmp2_ = NULL;
	GeeHashSet* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (child != NULL);
	g_return_if_fail (full_contents != NULL);
	_tmp0_ = full_contents;
	_tmp1_ = child;
	_tmp2_ = font_manager_filter_get_families ((FontManagerFilter*) _tmp1_);
	_tmp3_ = _tmp2_;
	gee_collection_add_all ((GeeCollection*) _tmp0_, (GeeCollection*) _tmp3_);
	{
		GeeArrayList* __child_list = NULL;
		FontManagerCollection* _tmp4_ = NULL;
		GeeArrayList* _tmp5_ = NULL;
		GeeArrayList* _tmp6_ = NULL;
		gint __child_size = 0;
		GeeArrayList* _tmp7_ = NULL;
		gint _tmp8_ = 0;
		gint _tmp9_ = 0;
		gint __child_index = 0;
		_tmp4_ = child;
		_tmp5_ = _tmp4_->priv->_children;
		_tmp6_ = _g_object_ref0 (_tmp5_);
		__child_list = _tmp6_;
		_tmp7_ = __child_list;
		_tmp8_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp7_);
		_tmp9_ = _tmp8_;
		__child_size = _tmp9_;
		__child_index = -1;
		while (TRUE) {
			gint _tmp10_ = 0;
			gint _tmp11_ = 0;
			gint _tmp12_ = 0;
			FontManagerCollection* _child = NULL;
			GeeArrayList* _tmp13_ = NULL;
			gint _tmp14_ = 0;
			gpointer _tmp15_ = NULL;
			FontManagerCollection* _tmp16_ = NULL;
			GeeHashSet* _tmp17_ = NULL;
			_tmp10_ = __child_index;
			__child_index = _tmp10_ + 1;
			_tmp11_ = __child_index;
			_tmp12_ = __child_size;
			if (!(_tmp11_ < _tmp12_)) {
				break;
			}
			_tmp13_ = __child_list;
			_tmp14_ = __child_index;
			_tmp15_ = gee_abstract_list_get ((GeeAbstractList*) _tmp13_, _tmp14_);
			_child = (FontManagerCollection*) _tmp15_;
			_tmp16_ = _child;
			_tmp17_ = full_contents;
			font_manager_collection_add_child_contents (self, _tmp16_, _tmp17_);
			_g_object_unref0 (_child);
		}
		_g_object_unref0 (__child_list);
	}
	return;
}


GeeHashSet* font_manager_collection_get_full_contents (FontManagerCollection* self) {
	GeeHashSet* result = NULL;
	GeeHashSet* full_contents = NULL;
	GeeHashSet* _tmp0_ = NULL;
	GeeHashSet* _tmp1_ = NULL;
	GeeHashSet* _tmp2_ = NULL;
	GeeHashSet* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL);
	full_contents = _tmp0_;
	_tmp1_ = full_contents;
	_tmp2_ = font_manager_filter_get_families ((FontManagerFilter*) self);
	_tmp3_ = _tmp2_;
	gee_collection_add_all ((GeeCollection*) _tmp1_, (GeeCollection*) _tmp3_);
	{
		GeeArrayList* _child_list = NULL;
		GeeArrayList* _tmp4_ = NULL;
		GeeArrayList* _tmp5_ = NULL;
		gint _child_size = 0;
		GeeArrayList* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		gint _tmp8_ = 0;
		gint _child_index = 0;
		_tmp4_ = self->priv->_children;
		_tmp5_ = _g_object_ref0 (_tmp4_);
		_child_list = _tmp5_;
		_tmp6_ = _child_list;
		_tmp7_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp6_);
		_tmp8_ = _tmp7_;
		_child_size = _tmp8_;
		_child_index = -1;
		while (TRUE) {
			gint _tmp9_ = 0;
			gint _tmp10_ = 0;
			gint _tmp11_ = 0;
			FontManagerCollection* child = NULL;
			GeeArrayList* _tmp12_ = NULL;
			gint _tmp13_ = 0;
			gpointer _tmp14_ = NULL;
			FontManagerCollection* _tmp15_ = NULL;
			GeeHashSet* _tmp16_ = NULL;
			_tmp9_ = _child_index;
			_child_index = _tmp9_ + 1;
			_tmp10_ = _child_index;
			_tmp11_ = _child_size;
			if (!(_tmp10_ < _tmp11_)) {
				break;
			}
			_tmp12_ = _child_list;
			_tmp13_ = _child_index;
			_tmp14_ = gee_abstract_list_get ((GeeAbstractList*) _tmp12_, _tmp13_);
			child = (FontManagerCollection*) _tmp14_;
			_tmp15_ = child;
			_tmp16_ = full_contents;
			font_manager_collection_add_child_contents (self, _tmp15_, _tmp16_);
			_g_object_unref0 (child);
		}
		_g_object_unref0 (_child_list);
	}
	result = full_contents;
	return result;
}


void font_manager_collection_update (FontManagerCollection* self, FontConfigReject* reject) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	FontConfigReject* _tmp8_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (reject != NULL);
	_tmp0_ = font_manager_filter_get_active ((FontManagerFilter*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		FontConfigReject* _tmp2_ = NULL;
		GeeHashSet* _tmp3_ = NULL;
		GeeHashSet* _tmp4_ = NULL;
		_tmp2_ = reject;
		_tmp3_ = font_manager_filter_get_families ((FontManagerFilter*) self);
		_tmp4_ = _tmp3_;
		gee_collection_remove_all ((GeeCollection*) _tmp2_, (GeeCollection*) _tmp4_);
	} else {
		FontConfigReject* _tmp5_ = NULL;
		GeeHashSet* _tmp6_ = NULL;
		GeeHashSet* _tmp7_ = NULL;
		_tmp5_ = reject;
		_tmp6_ = font_manager_filter_get_families ((FontManagerFilter*) self);
		_tmp7_ = _tmp6_;
		gee_collection_add_all ((GeeCollection*) _tmp5_, (GeeCollection*) _tmp7_);
	}
	_tmp8_ = reject;
	font_config_selections_save ((FontConfigSelections*) _tmp8_);
	{
		GeeArrayList* _child_list = NULL;
		GeeArrayList* _tmp9_ = NULL;
		GeeArrayList* _tmp10_ = NULL;
		gint _child_size = 0;
		GeeArrayList* _tmp11_ = NULL;
		gint _tmp12_ = 0;
		gint _tmp13_ = 0;
		gint _child_index = 0;
		_tmp9_ = self->priv->_children;
		_tmp10_ = _g_object_ref0 (_tmp9_);
		_child_list = _tmp10_;
		_tmp11_ = _child_list;
		_tmp12_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp11_);
		_tmp13_ = _tmp12_;
		_child_size = _tmp13_;
		_child_index = -1;
		while (TRUE) {
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
			gint _tmp16_ = 0;
			FontManagerCollection* child = NULL;
			GeeArrayList* _tmp17_ = NULL;
			gint _tmp18_ = 0;
			gpointer _tmp19_ = NULL;
			FontManagerCollection* _tmp20_ = NULL;
			gboolean _tmp21_ = FALSE;
			gboolean _tmp22_ = FALSE;
			FontManagerCollection* _tmp23_ = NULL;
			FontConfigReject* _tmp24_ = NULL;
			_tmp14_ = _child_index;
			_child_index = _tmp14_ + 1;
			_tmp15_ = _child_index;
			_tmp16_ = _child_size;
			if (!(_tmp15_ < _tmp16_)) {
				break;
			}
			_tmp17_ = _child_list;
			_tmp18_ = _child_index;
			_tmp19_ = gee_abstract_list_get ((GeeAbstractList*) _tmp17_, _tmp18_);
			child = (FontManagerCollection*) _tmp19_;
			_tmp20_ = child;
			_tmp21_ = font_manager_filter_get_active ((FontManagerFilter*) self);
			_tmp22_ = _tmp21_;
			font_manager_filter_set_active ((FontManagerFilter*) _tmp20_, _tmp22_);
			_tmp23_ = child;
			_tmp24_ = reject;
			font_manager_collection_update (_tmp23_, _tmp24_);
			_g_object_unref0 (child);
		}
		_g_object_unref0 (_child_list);
	}
	return;
}


static Block4Data* block4_data_ref (Block4Data* _data4_) {
	g_atomic_int_inc (&_data4_->_ref_count_);
	return _data4_;
}


static void block4_data_unref (void * _userdata_) {
	Block4Data* _data4_;
	_data4_ = (Block4Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data4_->_ref_count_)) {
		FontManagerCollection* self;
		self = _data4_->self;
		_g_object_unref0 (_data4_->res);
		_g_object_unref0 (self);
		g_slice_free (Block4Data, _data4_);
	}
}


static void ___lambda41_ (Block4Data* _data4_, JsonObject* obj, const gchar* name, JsonNode* node) {
	FontManagerCollection* self;
	GeeArrayList* _tmp0_ = NULL;
	JsonNode* _tmp1_ = NULL;
	GObject* _tmp2_ = NULL;
	FontManagerCollection* _tmp3_ = NULL;
	self = _data4_->self;
	g_return_if_fail (obj != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (node != NULL);
	_tmp0_ = _data4_->res;
	_tmp1_ = node;
	_tmp2_ = json_gobject_deserialize (FONT_MANAGER_TYPE_COLLECTION, _tmp1_);
	_tmp3_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection);
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp0_, _tmp3_);
	_g_object_unref0 (_tmp3_);
}


static void ____lambda41__json_object_foreach (JsonObject* object, const gchar* member_name, JsonNode* member_node, gpointer self) {
	___lambda41_ (self, object, member_name, member_node);
}


static gboolean font_manager_collection_real_deserialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node) {
	FontManagerCollection * self;
	GValue _vala_val = {0};
	gboolean result = FALSE;
	GParamSpec* _tmp0_ = NULL;
	GType _tmp1_ = 0UL;
	self = (FontManagerCollection*) base;
	g_return_val_if_fail (prop_name != NULL, FALSE);
	g_return_val_if_fail (pspec != NULL, FALSE);
	g_return_val_if_fail (node != NULL, FALSE);
	_tmp0_ = pspec;
	_tmp1_ = _tmp0_->value_type;
	if (_tmp1_ == GEE_TYPE_ARRAY_LIST) {
		Block4Data* _data4_;
		GParamSpec* _tmp2_ = NULL;
		GType _tmp3_ = 0UL;
		GValue _tmp4_ = {0};
		GValue _tmp5_ = {0};
		GeeArrayList* _tmp6_ = NULL;
		JsonNode* _tmp7_ = NULL;
		JsonObject* _tmp8_ = NULL;
		GeeArrayList* _tmp9_ = NULL;
		_data4_ = g_slice_new0 (Block4Data);
		_data4_->_ref_count_ = 1;
		_data4_->self = g_object_ref (self);
		_tmp2_ = pspec;
		_tmp3_ = _tmp2_->value_type;
		g_value_init (&_tmp4_, _tmp3_);
		G_IS_VALUE (&_vala_val) ? (g_value_unset (&_vala_val), NULL) : NULL;
		_vala_val = _tmp4_;
		_tmp5_ = _vala_val;
		_tmp6_ = gee_array_list_new (FONT_MANAGER_TYPE_COLLECTION, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
		_data4_->res = _tmp6_;
		_tmp7_ = node;
		_tmp8_ = json_node_get_object (_tmp7_);
		json_object_foreach_member (_tmp8_, ____lambda41__json_object_foreach, _data4_);
		_tmp9_ = _data4_->res;
		g_value_set_object (&_vala_val, (GObject*) _tmp9_);
		result = TRUE;
		block4_data_unref (_data4_);
		_data4_ = NULL;
		if (val) {
			*val = _vala_val;
		} else {
			G_IS_VALUE (&_vala_val) ? (g_value_unset (&_vala_val), NULL) : NULL;
		}
		return result;
	} else {
		const gchar* _tmp10_ = NULL;
		GParamSpec* _tmp11_ = NULL;
		JsonNode* _tmp12_ = NULL;
		GValue _tmp13_ = {0};
		gboolean _tmp14_ = FALSE;
		_tmp10_ = prop_name;
		_tmp11_ = pspec;
		_tmp12_ = node;
		_tmp14_ = CACHEABLE_CLASS (font_manager_collection_parent_class)->deserialize_property ((Cacheable*) G_TYPE_CHECK_INSTANCE_CAST (self, FONT_MANAGER_TYPE_FILTER, FontManagerFilter), _tmp10_, &_tmp13_, _tmp11_, _tmp12_);
		G_IS_VALUE (&_vala_val) ? (g_value_unset (&_vala_val), NULL) : NULL;
		_vala_val = _tmp13_;
		result = _tmp14_;
		if (val) {
			*val = _vala_val;
		} else {
			G_IS_VALUE (&_vala_val) ? (g_value_unset (&_vala_val), NULL) : NULL;
		}
		return result;
	}
	if (val) {
		*val = _vala_val;
	} else {
		G_IS_VALUE (&_vala_val) ? (g_value_unset (&_vala_val), NULL) : NULL;
	}
}


static void _vala_JsonNode_free (JsonNode* self) {
	g_boxed_free (json_node_get_type (), self);
}


static JsonNode* font_manager_collection_real_serialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec) {
	FontManagerCollection * self;
	JsonNode* result = NULL;
	GParamSpec* _tmp0_ = NULL;
	GType _tmp1_ = 0UL;
	self = (FontManagerCollection*) base;
	g_return_val_if_fail (prop_name != NULL, NULL);
	g_return_val_if_fail (val != NULL, NULL);
	g_return_val_if_fail (pspec != NULL, NULL);
	_tmp0_ = pspec;
	_tmp1_ = _tmp0_->value_type;
	if (_tmp1_ == GEE_TYPE_ARRAY_LIST) {
		JsonNode* node = NULL;
		JsonNode* _tmp2_ = NULL;
		JsonObject* obj = NULL;
		JsonObject* _tmp3_ = NULL;
		JsonNode* _tmp23_ = NULL;
		JsonObject* _tmp24_ = NULL;
		_tmp2_ = json_node_new (JSON_NODE_OBJECT);
		node = _tmp2_;
		_tmp3_ = json_object_new ();
		obj = _tmp3_;
		{
			GeeArrayList* _collection_list = NULL;
			GeeArrayList* _tmp4_ = NULL;
			GeeArrayList* _tmp5_ = NULL;
			gint _collection_size = 0;
			GeeArrayList* _tmp6_ = NULL;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			gint _collection_index = 0;
			_tmp4_ = self->priv->_children;
			_tmp5_ = _g_object_ref0 (_tmp4_);
			_collection_list = _tmp5_;
			_tmp6_ = _collection_list;
			_tmp7_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp6_);
			_tmp8_ = _tmp7_;
			_collection_size = _tmp8_;
			_collection_index = -1;
			while (TRUE) {
				gint _tmp9_ = 0;
				gint _tmp10_ = 0;
				gint _tmp11_ = 0;
				FontManagerCollection* collection = NULL;
				GeeArrayList* _tmp12_ = NULL;
				gint _tmp13_ = 0;
				gpointer _tmp14_ = NULL;
				JsonObject* _tmp15_ = NULL;
				FontManagerCollection* _tmp16_ = NULL;
				const gchar* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				gchar* _tmp19_ = NULL;
				gchar* _tmp20_ = NULL;
				FontManagerCollection* _tmp21_ = NULL;
				JsonNode* _tmp22_ = NULL;
				_tmp9_ = _collection_index;
				_collection_index = _tmp9_ + 1;
				_tmp10_ = _collection_index;
				_tmp11_ = _collection_size;
				if (!(_tmp10_ < _tmp11_)) {
					break;
				}
				_tmp12_ = _collection_list;
				_tmp13_ = _collection_index;
				_tmp14_ = gee_abstract_list_get ((GeeAbstractList*) _tmp12_, _tmp13_);
				collection = (FontManagerCollection*) _tmp14_;
				_tmp15_ = obj;
				_tmp16_ = collection;
				_tmp17_ = font_manager_filter_get_name ((FontManagerFilter*) _tmp16_);
				_tmp18_ = _tmp17_;
				_tmp19_ = g_strescape (_tmp18_, "");
				_tmp20_ = _tmp19_;
				_tmp21_ = collection;
				_tmp22_ = json_gobject_serialize ((GObject*) _tmp21_);
				json_object_set_member (_tmp15_, _tmp20_, _tmp22_);
				_g_free0 (_tmp20_);
				_g_object_unref0 (collection);
			}
			_g_object_unref0 (_collection_list);
		}
		_tmp23_ = node;
		_tmp24_ = obj;
		json_node_set_object (_tmp23_, _tmp24_);
		result = node;
		_json_object_unref0 (obj);
		return result;
	} else {
		const gchar* _tmp25_ = NULL;
		GValue _tmp26_ = {0};
		GParamSpec* _tmp27_ = NULL;
		JsonNode* _tmp28_ = NULL;
		_tmp25_ = prop_name;
		_tmp26_ = *val;
		_tmp27_ = pspec;
		_tmp28_ = CACHEABLE_CLASS (font_manager_collection_parent_class)->serialize_property ((Cacheable*) G_TYPE_CHECK_INSTANCE_CAST (self, FONT_MANAGER_TYPE_FILTER, FontManagerFilter), _tmp25_, &_tmp26_, _tmp27_);
		result = _tmp28_;
		return result;
	}
}


GeeArrayList* font_manager_collection_get_children (FontManagerCollection* self) {
	GeeArrayList* result;
	GeeArrayList* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_children;
	result = _tmp0_;
	return result;
}


void font_manager_collection_set_children (FontManagerCollection* self, GeeArrayList* value) {
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_children);
	self->priv->_children = _tmp1_;
	g_object_notify ((GObject *) self, "children");
}


static void font_manager_collection_class_init (FontManagerCollectionClass * klass) {
	font_manager_collection_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerCollectionPrivate));
	((CacheableClass *) klass)->deserialize_property = font_manager_collection_real_deserialize_property;
	((CacheableClass *) klass)->serialize_property = font_manager_collection_real_serialize_property;
	G_OBJECT_CLASS (klass)->get_property = _vala_font_manager_collection_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_manager_collection_set_property;
	G_OBJECT_CLASS (klass)->finalize = font_manager_collection_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_COLLECTION_CHILDREN, g_param_spec_object ("children", "children", "children", GEE_TYPE_ARRAY_LIST, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void font_manager_collection_instance_init (FontManagerCollection * self) {
	self->priv = FONT_MANAGER_COLLECTION_GET_PRIVATE (self);
}


static void font_manager_collection_finalize (GObject* obj) {
	FontManagerCollection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection);
	_g_object_unref0 (self->priv->_children);
	G_OBJECT_CLASS (font_manager_collection_parent_class)->finalize (obj);
}


GType font_manager_collection_get_type (void) {
	static volatile gsize font_manager_collection_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_collection_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerCollectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_collection_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerCollection), 0, (GInstanceInitFunc) font_manager_collection_instance_init, NULL };
		GType font_manager_collection_type_id;
		font_manager_collection_type_id = g_type_register_static (FONT_MANAGER_TYPE_FILTER, "FontManagerCollection", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_collection_type_id__volatile, font_manager_collection_type_id);
	}
	return font_manager_collection_type_id__volatile;
}


static void _vala_font_manager_collection_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontManagerCollection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection);
	switch (property_id) {
		case FONT_MANAGER_COLLECTION_CHILDREN:
		g_value_set_object (value, font_manager_collection_get_children (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_manager_collection_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontManagerCollection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection);
	switch (property_id) {
		case FONT_MANAGER_COLLECTION_CHILDREN:
		font_manager_collection_set_children (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



