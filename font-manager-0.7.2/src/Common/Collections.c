/* Collections.c generated by valac 0.26.1, the Vala compiler
 * generated from Collections.vala, do not modify */

/* Collections.vala
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
#include <glib/gstdio.h>
#include <gio/gio.h>


#define TYPE_CACHEABLE (cacheable_get_type ())
#define CACHEABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CACHEABLE, Cacheable))
#define CACHEABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CACHEABLE, CacheableClass))
#define IS_CACHEABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CACHEABLE))
#define IS_CACHEABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CACHEABLE))
#define CACHEABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CACHEABLE, CacheableClass))

typedef struct _Cacheable Cacheable;
typedef struct _CacheableClass CacheableClass;
typedef struct _CacheablePrivate CacheablePrivate;

#define FONT_MANAGER_TYPE_COLLECTIONS (font_manager_collections_get_type ())
#define FONT_MANAGER_COLLECTIONS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollections))
#define FONT_MANAGER_COLLECTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollectionsClass))
#define FONT_MANAGER_IS_COLLECTIONS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_COLLECTIONS))
#define FONT_MANAGER_IS_COLLECTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_COLLECTIONS))
#define FONT_MANAGER_COLLECTIONS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollectionsClass))

typedef struct _FontManagerCollections FontManagerCollections;
typedef struct _FontManagerCollectionsClass FontManagerCollectionsClass;
typedef struct _FontManagerCollectionsPrivate FontManagerCollectionsPrivate;

#define FONT_MANAGER_TYPE_FILTER (font_manager_filter_get_type ())
#define FONT_MANAGER_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_FILTER, FontManagerFilter))
#define FONT_MANAGER_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_FILTER, FontManagerFilterClass))
#define FONT_MANAGER_IS_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_FILTER))
#define FONT_MANAGER_IS_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_FILTER))
#define FONT_MANAGER_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_FILTER, FontManagerFilterClass))

typedef struct _FontManagerFilter FontManagerFilter;
typedef struct _FontManagerFilterClass FontManagerFilterClass;

#define FONT_MANAGER_TYPE_COLLECTION (font_manager_collection_get_type ())
#define FONT_MANAGER_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection))
#define FONT_MANAGER_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollectionClass))
#define FONT_MANAGER_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_COLLECTION))
#define FONT_MANAGER_IS_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_COLLECTION))
#define FONT_MANAGER_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_COLLECTION, FontManagerCollectionClass))

typedef struct _FontManagerCollection FontManagerCollection;
typedef struct _FontManagerCollectionClass FontManagerCollectionClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

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
typedef struct _Block1Data Block1Data;
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

struct _FontManagerCollections {
	Cacheable parent_instance;
	FontManagerCollectionsPrivate * priv;
};

struct _FontManagerCollectionsClass {
	CacheableClass parent_class;
};

struct _FontManagerCollectionsPrivate {
	GeeHashMap* _entries;
};

struct _Block1Data {
	int _ref_count_;
	FontManagerCollections* self;
	GeeHashMap* collections;
};


static gpointer font_manager_collections_parent_class = NULL;

GType cacheable_get_type (void) G_GNUC_CONST;
GType font_manager_collections_get_type (void) G_GNUC_CONST;
GType font_manager_filter_get_type (void) G_GNUC_CONST;
GType font_manager_collection_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_COLLECTIONS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollectionsPrivate))
enum  {
	FONT_MANAGER_COLLECTIONS_DUMMY_PROPERTY,
	FONT_MANAGER_COLLECTIONS_ENTRIES
};
gchar* font_manager_collections_get_cache_file (void);
#define FONT_MANAGER_NAME "font-manager"
FontManagerCollections* font_manager_collections_new (void);
FontManagerCollections* font_manager_collections_construct (GType object_type);
Cacheable* cacheable_new (void);
Cacheable* cacheable_construct (GType object_type);
void font_manager_collections_set_entries (FontManagerCollections* self, GeeHashMap* value);
GType font_config_selections_get_type (void) G_GNUC_CONST;
GType font_config_reject_get_type (void) G_GNUC_CONST;
void font_manager_collections_update (FontManagerCollections* self, FontConfigReject* reject);
void font_manager_collections_rename_collection (FontManagerCollections* self, FontManagerCollection* collection, const gchar* new_name);
const gchar* font_manager_filter_get_name (FontManagerFilter* self);
void font_manager_filter_set_name (FontManagerFilter* self, const gchar* value);
GeeHashMap* font_manager_collections_get_entries (FontManagerCollections* self);
GeeHashSet* font_manager_collections_get_full_contents (FontManagerCollections* self);
GeeHashSet* font_manager_collection_get_full_contents (FontManagerCollection* self);
static gboolean font_manager_collections_real_deserialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void ___lambda50_ (Block1Data* _data1_, JsonObject* obj, const gchar* name, JsonNode* node);
static void ____lambda50__json_object_foreach (JsonObject* object, const gchar* member_name, JsonNode* member_node, gpointer self);
gboolean cacheable_deserialize_property (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node);
static JsonNode* font_manager_collections_real_serialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec);
static void _vala_JsonNode_free (JsonNode* self);
JsonNode* cacheable_serialize_property (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec);
gboolean font_manager_collections_cache (FontManagerCollections* self);
gboolean write_json_file (JsonNode* root, const gchar* filepath, gboolean compress, gboolean backup);
static void font_manager_collections_finalize (GObject* obj);
static void _vala_font_manager_collections_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_manager_collections_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
FontManagerCollections* font_manager_load_collections (void);
JsonNode* load_json_file (const gchar* filepath, gboolean compressed);


gchar* font_manager_collections_get_cache_file (void) {
	gchar* result = NULL;
	gchar* dirpath = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* filepath = NULL;
	gchar* _tmp2_ = NULL;
	_tmp0_ = g_get_user_config_dir ();
	_tmp1_ = g_build_filename (_tmp0_, FONT_MANAGER_NAME, NULL);
	dirpath = _tmp1_;
	_tmp2_ = g_build_filename (dirpath, "Collections.json", NULL);
	filepath = _tmp2_;
	g_mkdir_with_parents (dirpath, 0755);
	result = filepath;
	_g_free0 (dirpath);
	return result;
}


FontManagerCollections* font_manager_collections_construct (GType object_type) {
	FontManagerCollections * self = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GeeHashMap* _tmp1_ = NULL;
	self = (FontManagerCollections*) cacheable_construct (object_type);
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, FONT_MANAGER_TYPE_COLLECTION, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	font_manager_collections_set_entries (self, _tmp1_);
	_g_object_unref0 (_tmp1_);
	return self;
}


FontManagerCollections* font_manager_collections_new (void) {
	return font_manager_collections_construct (FONT_MANAGER_TYPE_COLLECTIONS);
}


void font_manager_collections_update (FontManagerCollections* self, FontConfigReject* reject) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (reject != NULL);
	return;
}


void font_manager_collections_rename_collection (FontManagerCollections* self, FontManagerCollection* collection, const gchar* new_name) {
	gchar* old_name = NULL;
	FontManagerCollection* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	FontManagerCollection* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	GeeHashMap* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	gboolean _tmp8_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (collection != NULL);
	g_return_if_fail (new_name != NULL);
	_tmp0_ = collection;
	_tmp1_ = font_manager_filter_get_name ((FontManagerFilter*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_strdup (_tmp2_);
	old_name = _tmp3_;
	_tmp4_ = collection;
	_tmp5_ = new_name;
	font_manager_filter_set_name ((FontManagerFilter*) _tmp4_, _tmp5_);
	_tmp6_ = self->priv->_entries;
	_tmp7_ = old_name;
	_tmp8_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp6_, _tmp7_);
	if (_tmp8_) {
		GeeHashMap* _tmp9_ = NULL;
		FontManagerCollection* _tmp10_ = NULL;
		const gchar* _tmp11_ = NULL;
		const gchar* _tmp12_ = NULL;
		FontManagerCollection* _tmp13_ = NULL;
		GeeHashMap* _tmp14_ = NULL;
		const gchar* _tmp15_ = NULL;
		_tmp9_ = self->priv->_entries;
		_tmp10_ = collection;
		_tmp11_ = font_manager_filter_get_name ((FontManagerFilter*) _tmp10_);
		_tmp12_ = _tmp11_;
		_tmp13_ = collection;
		gee_abstract_map_set ((GeeAbstractMap*) _tmp9_, _tmp12_, _tmp13_);
		_tmp14_ = self->priv->_entries;
		_tmp15_ = old_name;
		gee_abstract_map_unset ((GeeAbstractMap*) _tmp14_, _tmp15_, NULL);
	}
	_g_free0 (old_name);
	return;
}


GeeHashSet* font_manager_collections_get_full_contents (FontManagerCollections* self) {
	GeeHashSet* result = NULL;
	GeeHashSet* full_contents = NULL;
	GeeHashSet* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL);
	full_contents = _tmp0_;
	{
		GeeIterator* _entry_it = NULL;
		GeeHashMap* _tmp1_ = NULL;
		GeeCollection* _tmp2_ = NULL;
		GeeCollection* _tmp3_ = NULL;
		GeeCollection* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
		GeeIterator* _tmp6_ = NULL;
		_tmp1_ = self->priv->_entries;
		_tmp2_ = gee_abstract_map_get_values ((GeeMap*) _tmp1_);
		_tmp3_ = _tmp2_;
		_tmp4_ = _tmp3_;
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
		_tmp6_ = _tmp5_;
		_g_object_unref0 (_tmp4_);
		_entry_it = _tmp6_;
		while (TRUE) {
			GeeIterator* _tmp7_ = NULL;
			gboolean _tmp8_ = FALSE;
			FontManagerCollection* entry = NULL;
			GeeIterator* _tmp9_ = NULL;
			gpointer _tmp10_ = NULL;
			GeeHashSet* _tmp11_ = NULL;
			FontManagerCollection* _tmp12_ = NULL;
			GeeHashSet* _tmp13_ = NULL;
			GeeHashSet* _tmp14_ = NULL;
			_tmp7_ = _entry_it;
			_tmp8_ = gee_iterator_next (_tmp7_);
			if (!_tmp8_) {
				break;
			}
			_tmp9_ = _entry_it;
			_tmp10_ = gee_iterator_get (_tmp9_);
			entry = (FontManagerCollection*) _tmp10_;
			_tmp11_ = full_contents;
			_tmp12_ = entry;
			_tmp13_ = font_manager_collection_get_full_contents (_tmp12_);
			_tmp14_ = _tmp13_;
			gee_collection_add_all ((GeeCollection*) _tmp11_, (GeeCollection*) _tmp14_);
			_g_object_unref0 (_tmp14_);
			_g_object_unref0 (entry);
		}
		_g_object_unref0 (_entry_it);
	}
	result = full_contents;
	return result;
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		FontManagerCollections* self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->collections);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void ___lambda50_ (Block1Data* _data1_, JsonObject* obj, const gchar* name, JsonNode* node) {
	FontManagerCollections* self;
	GeeHashMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	JsonNode* _tmp2_ = NULL;
	GObject* _tmp3_ = NULL;
	FontManagerCollection* _tmp4_ = NULL;
	self = _data1_->self;
	g_return_if_fail (obj != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (node != NULL);
	_tmp0_ = _data1_->collections;
	_tmp1_ = name;
	_tmp2_ = node;
	_tmp3_ = json_gobject_deserialize (FONT_MANAGER_TYPE_COLLECTION, _tmp2_);
	_tmp4_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, FONT_MANAGER_TYPE_COLLECTION, FontManagerCollection);
	gee_abstract_map_set ((GeeAbstractMap*) _tmp0_, _tmp1_, _tmp4_);
	_g_object_unref0 (_tmp4_);
}


static void ____lambda50__json_object_foreach (JsonObject* object, const gchar* member_name, JsonNode* member_node, gpointer self) {
	___lambda50_ (self, object, member_name, member_node);
}


static gboolean font_manager_collections_real_deserialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node) {
	FontManagerCollections * self;
	GValue _vala_val = {0};
	gboolean result = FALSE;
	GParamSpec* _tmp0_ = NULL;
	GType _tmp1_ = 0UL;
	self = (FontManagerCollections*) base;
	g_return_val_if_fail (prop_name != NULL, FALSE);
	g_return_val_if_fail (pspec != NULL, FALSE);
	g_return_val_if_fail (node != NULL, FALSE);
	_tmp0_ = pspec;
	_tmp1_ = _tmp0_->value_type;
	if (_tmp1_ == GEE_TYPE_HASH_MAP) {
		Block1Data* _data1_;
		GParamSpec* _tmp2_ = NULL;
		GType _tmp3_ = 0UL;
		GValue _tmp4_ = {0};
		GValue _tmp5_ = {0};
		GeeHashMap* _tmp6_ = NULL;
		JsonNode* _tmp7_ = NULL;
		JsonObject* _tmp8_ = NULL;
		GeeHashMap* _tmp9_ = NULL;
		_data1_ = g_slice_new0 (Block1Data);
		_data1_->_ref_count_ = 1;
		_data1_->self = g_object_ref (self);
		_tmp2_ = pspec;
		_tmp3_ = _tmp2_->value_type;
		g_value_init (&_tmp4_, _tmp3_);
		G_IS_VALUE (&_vala_val) ? (g_value_unset (&_vala_val), NULL) : NULL;
		_vala_val = _tmp4_;
		_tmp5_ = _vala_val;
		_tmp6_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, FONT_MANAGER_TYPE_COLLECTION, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
		_data1_->collections = _tmp6_;
		_tmp7_ = node;
		_tmp8_ = json_node_get_object (_tmp7_);
		json_object_foreach_member (_tmp8_, ____lambda50__json_object_foreach, _data1_);
		_tmp9_ = _data1_->collections;
		g_value_set_object (&_vala_val, (GObject*) _tmp9_);
		result = TRUE;
		block1_data_unref (_data1_);
		_data1_ = NULL;
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
		_tmp14_ = CACHEABLE_CLASS (font_manager_collections_parent_class)->deserialize_property (G_TYPE_CHECK_INSTANCE_CAST (self, TYPE_CACHEABLE, Cacheable), _tmp10_, &_tmp13_, _tmp11_, _tmp12_);
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


static JsonNode* font_manager_collections_real_serialize_property (Cacheable* base, const gchar* prop_name, GValue* val, GParamSpec* pspec) {
	FontManagerCollections * self;
	JsonNode* result = NULL;
	GParamSpec* _tmp0_ = NULL;
	GType _tmp1_ = 0UL;
	self = (FontManagerCollections*) base;
	g_return_val_if_fail (prop_name != NULL, NULL);
	g_return_val_if_fail (val != NULL, NULL);
	g_return_val_if_fail (pspec != NULL, NULL);
	_tmp0_ = pspec;
	_tmp1_ = _tmp0_->value_type;
	if (_tmp1_ == GEE_TYPE_HASH_MAP) {
		JsonNode* node = NULL;
		JsonNode* _tmp2_ = NULL;
		JsonObject* obj = NULL;
		JsonObject* _tmp3_ = NULL;
		JsonNode* _tmp22_ = NULL;
		JsonObject* _tmp23_ = NULL;
		_tmp2_ = json_node_new (JSON_NODE_OBJECT);
		node = _tmp2_;
		_tmp3_ = json_object_new ();
		obj = _tmp3_;
		{
			GeeIterator* _collection_it = NULL;
			GeeHashMap* _tmp4_ = NULL;
			GeeCollection* _tmp5_ = NULL;
			GeeCollection* _tmp6_ = NULL;
			GeeCollection* _tmp7_ = NULL;
			GeeIterator* _tmp8_ = NULL;
			GeeIterator* _tmp9_ = NULL;
			_tmp4_ = self->priv->_entries;
			_tmp5_ = gee_abstract_map_get_values ((GeeMap*) _tmp4_);
			_tmp6_ = _tmp5_;
			_tmp7_ = _tmp6_;
			_tmp8_ = gee_iterable_iterator ((GeeIterable*) _tmp7_);
			_tmp9_ = _tmp8_;
			_g_object_unref0 (_tmp7_);
			_collection_it = _tmp9_;
			while (TRUE) {
				GeeIterator* _tmp10_ = NULL;
				gboolean _tmp11_ = FALSE;
				FontManagerCollection* collection = NULL;
				GeeIterator* _tmp12_ = NULL;
				gpointer _tmp13_ = NULL;
				JsonObject* _tmp14_ = NULL;
				FontManagerCollection* _tmp15_ = NULL;
				const gchar* _tmp16_ = NULL;
				const gchar* _tmp17_ = NULL;
				gchar* _tmp18_ = NULL;
				gchar* _tmp19_ = NULL;
				FontManagerCollection* _tmp20_ = NULL;
				JsonNode* _tmp21_ = NULL;
				_tmp10_ = _collection_it;
				_tmp11_ = gee_iterator_next (_tmp10_);
				if (!_tmp11_) {
					break;
				}
				_tmp12_ = _collection_it;
				_tmp13_ = gee_iterator_get (_tmp12_);
				collection = (FontManagerCollection*) _tmp13_;
				_tmp14_ = obj;
				_tmp15_ = collection;
				_tmp16_ = font_manager_filter_get_name ((FontManagerFilter*) _tmp15_);
				_tmp17_ = _tmp16_;
				_tmp18_ = g_strescape (_tmp17_, "");
				_tmp19_ = _tmp18_;
				_tmp20_ = collection;
				_tmp21_ = json_gobject_serialize ((GObject*) _tmp20_);
				json_object_set_member (_tmp14_, _tmp19_, _tmp21_);
				_g_free0 (_tmp19_);
				_g_object_unref0 (collection);
			}
			_g_object_unref0 (_collection_it);
		}
		_tmp22_ = node;
		_tmp23_ = obj;
		json_node_set_object (_tmp22_, _tmp23_);
		result = node;
		_json_object_unref0 (obj);
		return result;
	} else {
		const gchar* _tmp24_ = NULL;
		GValue _tmp25_ = {0};
		GParamSpec* _tmp26_ = NULL;
		JsonNode* _tmp27_ = NULL;
		_tmp24_ = prop_name;
		_tmp25_ = *val;
		_tmp26_ = pspec;
		_tmp27_ = CACHEABLE_CLASS (font_manager_collections_parent_class)->serialize_property (G_TYPE_CHECK_INSTANCE_CAST (self, TYPE_CACHEABLE, Cacheable), _tmp24_, &_tmp25_, _tmp26_);
		result = _tmp27_;
		return result;
	}
}


gboolean font_manager_collections_cache (FontManagerCollections* self) {
	gboolean result = FALSE;
	JsonNode* _tmp0_ = NULL;
	JsonNode* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = json_gobject_serialize ((GObject*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = font_manager_collections_get_cache_file ();
	_tmp3_ = _tmp2_;
	_tmp4_ = write_json_file (_tmp1_, _tmp3_, FALSE, FALSE);
	_tmp5_ = !_tmp4_;
	_g_free0 (_tmp3_);
	__vala_JsonNode_free0 (_tmp1_);
	if (_tmp5_) {
		g_warning ("Collections.vala:94: Failed to save collection cache file.");
		result = FALSE;
		return result;
	}
	result = TRUE;
	return result;
}


GeeHashMap* font_manager_collections_get_entries (FontManagerCollections* self) {
	GeeHashMap* result;
	GeeHashMap* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_entries;
	result = _tmp0_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void font_manager_collections_set_entries (FontManagerCollections* self, GeeHashMap* value) {
	GeeHashMap* _tmp0_ = NULL;
	GeeHashMap* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_entries);
	self->priv->_entries = _tmp1_;
	g_object_notify ((GObject *) self, "entries");
}


static void font_manager_collections_class_init (FontManagerCollectionsClass * klass) {
	font_manager_collections_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerCollectionsPrivate));
	((CacheableClass *) klass)->deserialize_property = font_manager_collections_real_deserialize_property;
	((CacheableClass *) klass)->serialize_property = font_manager_collections_real_serialize_property;
	G_OBJECT_CLASS (klass)->get_property = _vala_font_manager_collections_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_manager_collections_set_property;
	G_OBJECT_CLASS (klass)->finalize = font_manager_collections_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_COLLECTIONS_ENTRIES, g_param_spec_object ("entries", "entries", "entries", GEE_TYPE_HASH_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void font_manager_collections_instance_init (FontManagerCollections * self) {
	self->priv = FONT_MANAGER_COLLECTIONS_GET_PRIVATE (self);
}


static void font_manager_collections_finalize (GObject* obj) {
	FontManagerCollections * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollections);
	_g_object_unref0 (self->priv->_entries);
	G_OBJECT_CLASS (font_manager_collections_parent_class)->finalize (obj);
}


GType font_manager_collections_get_type (void) {
	static volatile gsize font_manager_collections_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_collections_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerCollectionsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_collections_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerCollections), 0, (GInstanceInitFunc) font_manager_collections_instance_init, NULL };
		GType font_manager_collections_type_id;
		font_manager_collections_type_id = g_type_register_static (TYPE_CACHEABLE, "FontManagerCollections", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_collections_type_id__volatile, font_manager_collections_type_id);
	}
	return font_manager_collections_type_id__volatile;
}


static void _vala_font_manager_collections_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontManagerCollections * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollections);
	switch (property_id) {
		case FONT_MANAGER_COLLECTIONS_ENTRIES:
		g_value_set_object (value, font_manager_collections_get_entries (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_manager_collections_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontManagerCollections * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollections);
	switch (property_id) {
		case FONT_MANAGER_COLLECTIONS_ENTRIES:
		font_manager_collections_set_entries (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


FontManagerCollections* font_manager_load_collections (void) {
	FontManagerCollections* result = NULL;
	FontManagerCollections* collections = NULL;
	gchar* cache = NULL;
	gchar* _tmp0_ = NULL;
	GFile* group_cache = NULL;
	const gchar* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	GFile* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	FontManagerCollections* _tmp9_ = NULL;
	collections = NULL;
	_tmp0_ = font_manager_collections_get_cache_file ();
	cache = _tmp0_;
	_tmp1_ = cache;
	_tmp2_ = g_file_new_for_path (_tmp1_);
	group_cache = _tmp2_;
	_tmp3_ = group_cache;
	_tmp4_ = g_file_query_exists (_tmp3_, NULL);
	if (_tmp4_) {
		const gchar* _tmp5_ = NULL;
		JsonNode* _tmp6_ = NULL;
		JsonNode* _tmp7_ = NULL;
		GObject* _tmp8_ = NULL;
		_tmp5_ = cache;
		_tmp6_ = load_json_file (_tmp5_, FALSE);
		_tmp7_ = _tmp6_;
		_tmp8_ = json_gobject_deserialize (FONT_MANAGER_TYPE_COLLECTIONS, _tmp7_);
		_g_object_unref0 (collections);
		collections = G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, FONT_MANAGER_TYPE_COLLECTIONS, FontManagerCollections);
		__vala_JsonNode_free0 (_tmp7_);
	}
	_tmp9_ = collections;
	if (_tmp9_ != NULL) {
		result = collections;
		_g_object_unref0 (group_cache);
		_g_free0 (cache);
		return result;
	} else {
		FontManagerCollections* _tmp10_ = NULL;
		_tmp10_ = font_manager_collections_new ();
		result = _tmp10_;
		_g_object_unref0 (group_cache);
		_g_free0 (cache);
		_g_object_unref0 (collections);
		return result;
	}
	_g_object_unref0 (group_cache);
	_g_free0 (cache);
	_g_object_unref0 (collections);
}



