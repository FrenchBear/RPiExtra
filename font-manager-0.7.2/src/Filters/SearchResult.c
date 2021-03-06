/* SearchResult.c generated by valac 0.26.1, the Vala compiler
 * generated from SearchResult.vala, do not modify */

/* SearchResult.vala
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

#define FONT_MANAGER_TYPE_CATEGORY (font_manager_category_get_type ())
#define FONT_MANAGER_CATEGORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_CATEGORY, FontManagerCategory))
#define FONT_MANAGER_CATEGORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_CATEGORY, FontManagerCategoryClass))
#define FONT_MANAGER_IS_CATEGORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_CATEGORY))
#define FONT_MANAGER_IS_CATEGORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_CATEGORY))
#define FONT_MANAGER_CATEGORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_CATEGORY, FontManagerCategoryClass))

typedef struct _FontManagerCategory FontManagerCategory;
typedef struct _FontManagerCategoryClass FontManagerCategoryClass;
typedef struct _FontManagerCategoryPrivate FontManagerCategoryPrivate;

#define FONT_MANAGER_TYPE_DATABASE (font_manager_database_get_type ())
#define FONT_MANAGER_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_DATABASE, FontManagerDatabase))
#define FONT_MANAGER_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_DATABASE, FontManagerDatabaseClass))
#define FONT_MANAGER_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_DATABASE))
#define FONT_MANAGER_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_DATABASE))
#define FONT_MANAGER_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_DATABASE, FontManagerDatabaseClass))

typedef struct _FontManagerDatabase FontManagerDatabase;
typedef struct _FontManagerDatabaseClass FontManagerDatabaseClass;

#define FONT_MANAGER_TYPE_SEARCH_RESULT (font_manager_search_result_get_type ())
#define FONT_MANAGER_SEARCH_RESULT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_SEARCH_RESULT, FontManagerSearchResult))
#define FONT_MANAGER_SEARCH_RESULT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_SEARCH_RESULT, FontManagerSearchResultClass))
#define FONT_MANAGER_IS_SEARCH_RESULT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_SEARCH_RESULT))
#define FONT_MANAGER_IS_SEARCH_RESULT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_SEARCH_RESULT))
#define FONT_MANAGER_SEARCH_RESULT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_SEARCH_RESULT, FontManagerSearchResultClass))

typedef struct _FontManagerSearchResult FontManagerSearchResult;
typedef struct _FontManagerSearchResultClass FontManagerSearchResultClass;
typedef struct _FontManagerSearchResultPrivate FontManagerSearchResultPrivate;

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

struct _FontManagerCategory {
	FontManagerFilter parent_instance;
	FontManagerCategoryPrivate * priv;
};

struct _FontManagerCategoryClass {
	FontManagerFilterClass parent_class;
	void (*update) (FontManagerCategory* self, FontManagerDatabase* db);
};

struct _FontManagerSearchResult {
	FontManagerCategory parent_instance;
	FontManagerSearchResultPrivate * priv;
};

struct _FontManagerSearchResultClass {
	FontManagerCategoryClass parent_class;
};


static gpointer font_manager_search_result_parent_class = NULL;

GType cacheable_get_type (void) G_GNUC_CONST;
GType font_manager_filter_get_type (void) G_GNUC_CONST;
GType font_manager_category_get_type (void) G_GNUC_CONST;
GType font_manager_database_get_type (void) G_GNUC_CONST;
GType font_manager_search_result_get_type (void) G_GNUC_CONST;
enum  {
	FONT_MANAGER_SEARCH_RESULT_DUMMY_PROPERTY
};
FontManagerSearchResult* font_manager_search_result_new (const gchar* name);
FontManagerSearchResult* font_manager_search_result_construct (GType object_type, const gchar* name);
FontManagerCategory* font_manager_category_new (const gchar* name, const gchar* comment, const gchar* icon, const gchar* condition);
FontManagerCategory* font_manager_category_construct (GType object_type, const gchar* name, const gchar* comment, const gchar* icon, const gchar* condition);


FontManagerSearchResult* font_manager_search_result_construct (GType object_type, const gchar* name) {
	FontManagerSearchResult * self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = name;
	self = (FontManagerSearchResult*) font_manager_category_construct (object_type, _tmp0_, NULL, NULL, NULL);
	return self;
}


FontManagerSearchResult* font_manager_search_result_new (const gchar* name) {
	return font_manager_search_result_construct (FONT_MANAGER_TYPE_SEARCH_RESULT, name);
}


static void font_manager_search_result_class_init (FontManagerSearchResultClass * klass) {
	font_manager_search_result_parent_class = g_type_class_peek_parent (klass);
}


static void font_manager_search_result_instance_init (FontManagerSearchResult * self) {
}


GType font_manager_search_result_get_type (void) {
	static volatile gsize font_manager_search_result_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_search_result_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerSearchResultClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_search_result_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerSearchResult), 0, (GInstanceInitFunc) font_manager_search_result_instance_init, NULL };
		GType font_manager_search_result_type_id;
		font_manager_search_result_type_id = g_type_register_static (FONT_MANAGER_TYPE_CATEGORY, "FontManagerSearchResult", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_search_result_type_id__volatile, font_manager_search_result_type_id);
	}
	return font_manager_search_result_type_id__volatile;
}



