/* FontInfo.c generated by valac 0.26.1, the Vala compiler
 * generated from FontInfo.vala, do not modify */

/* FontInfo.vala
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

#define FONT_MANAGER_TYPE_FONT_INFO (font_manager_font_info_get_type ())
#define FONT_MANAGER_FONT_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfo))
#define FONT_MANAGER_FONT_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfoClass))
#define FONT_MANAGER_IS_FONT_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_FONT_INFO))
#define FONT_MANAGER_IS_FONT_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_FONT_INFO))
#define FONT_MANAGER_FONT_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfoClass))

typedef struct _FontManagerFontInfo FontManagerFontInfo;
typedef struct _FontManagerFontInfoClass FontManagerFontInfoClass;
typedef struct _FontManagerFontInfoPrivate FontManagerFontInfoPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _Cacheable {
	GObject parent_instance;
	CacheablePrivate * priv;
};

struct _CacheableClass {
	GObjectClass parent_class;
	gboolean (*deserialize_property) (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec, JsonNode* node);
	JsonNode* (*serialize_property) (Cacheable* self, const gchar* prop_name, GValue* val, GParamSpec* pspec);
};

struct _FontManagerFontInfo {
	Cacheable parent_instance;
	FontManagerFontInfoPrivate * priv;
	gint status;
};

struct _FontManagerFontInfoClass {
	CacheableClass parent_class;
};

struct _FontManagerFontInfoPrivate {
	gint _owner;
	gchar* _filetype;
	gchar* _filesize;
	gchar* _checksum;
	gchar* _version;
	gchar* _psname;
	gchar* _description;
	gchar* _vendor;
	gchar* _copyright;
	gchar* _license_type;
	gchar* _license_data;
	gchar* _license_url;
	gchar* _panose;
};


static gpointer font_manager_font_info_parent_class = NULL;

GType cacheable_get_type (void) G_GNUC_CONST;
GType font_manager_font_info_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_FONT_INFO_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfoPrivate))
enum  {
	FONT_MANAGER_FONT_INFO_DUMMY_PROPERTY,
	FONT_MANAGER_FONT_INFO_OWNER,
	FONT_MANAGER_FONT_INFO_FILETYPE,
	FONT_MANAGER_FONT_INFO_FILESIZE,
	FONT_MANAGER_FONT_INFO_CHECKSUM,
	FONT_MANAGER_FONT_INFO_VERSION,
	FONT_MANAGER_FONT_INFO_PSNAME,
	FONT_MANAGER_FONT_INFO_DESCRIPTION,
	FONT_MANAGER_FONT_INFO_VENDOR,
	FONT_MANAGER_FONT_INFO_COPYRIGHT,
	FONT_MANAGER_FONT_INFO_LICENSE_TYPE,
	FONT_MANAGER_FONT_INFO_LICENSE_DATA,
	FONT_MANAGER_FONT_INFO_LICENSE_URL,
	FONT_MANAGER_FONT_INFO_PANOSE
};
FontManagerFontInfo* font_manager_font_info_new_from_filepath (const gchar* filepath, gint index);
FontManagerFontInfo* font_manager_font_info_construct_from_filepath (GType object_type, const gchar* filepath, gint index);
Cacheable* cacheable_new (void);
Cacheable* cacheable_construct (GType object_type);
gint free_type_query_file_info (FontManagerFontInfo* fileinfo, const gchar* filepath, gint index);
static void font_manager_font_info_post (FontManagerFontInfo* self, const gchar* filepath);
const gchar* font_manager_font_info_get_version (FontManagerFontInfo* self);
void font_manager_font_info_set_version (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_filetype (FontManagerFontInfo* self);
void font_manager_font_info_set_filetype (FontManagerFontInfo* self, const gchar* value);
FontManagerFontInfo* font_manager_font_info_new (void);
FontManagerFontInfo* font_manager_font_info_construct (GType object_type);
gint font_manager_font_info_get_owner (FontManagerFontInfo* self);
void font_manager_font_info_set_owner (FontManagerFontInfo* self, gint value);
const gchar* font_manager_font_info_get_filesize (FontManagerFontInfo* self);
void font_manager_font_info_set_filesize (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_checksum (FontManagerFontInfo* self);
void font_manager_font_info_set_checksum (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_psname (FontManagerFontInfo* self);
void font_manager_font_info_set_psname (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_description (FontManagerFontInfo* self);
void font_manager_font_info_set_description (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_vendor (FontManagerFontInfo* self);
void font_manager_font_info_set_vendor (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_copyright (FontManagerFontInfo* self);
void font_manager_font_info_set_copyright (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_license_type (FontManagerFontInfo* self);
void font_manager_font_info_set_license_type (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_license_data (FontManagerFontInfo* self);
void font_manager_font_info_set_license_data (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_license_url (FontManagerFontInfo* self);
void font_manager_font_info_set_license_url (FontManagerFontInfo* self, const gchar* value);
const gchar* font_manager_font_info_get_panose (FontManagerFontInfo* self);
void font_manager_font_info_set_panose (FontManagerFontInfo* self, const gchar* value);
static void font_manager_font_info_finalize (GObject* obj);
static void _vala_font_manager_font_info_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_manager_font_info_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);

extern const gchar* FONT_MANAGER_VERSION_STRING_EXCLUDES[8];

FontManagerFontInfo* font_manager_font_info_construct_from_filepath (GType object_type, const gchar* filepath, gint index) {
	FontManagerFontInfo * self = NULL;
	const gchar* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	const gchar* _tmp3_ = NULL;
	g_return_val_if_fail (filepath != NULL, NULL);
	self = (FontManagerFontInfo*) cacheable_construct (object_type);
	_tmp0_ = filepath;
	_tmp1_ = index;
	_tmp2_ = free_type_query_file_info (self, _tmp0_, _tmp1_);
	self->status = _tmp2_;
	_tmp3_ = filepath;
	font_manager_font_info_post (self, _tmp3_);
	return self;
	return self;
}


FontManagerFontInfo* font_manager_font_info_new_from_filepath (const gchar* filepath, gint index) {
	return font_manager_font_info_construct_from_filepath (FONT_MANAGER_TYPE_FONT_INFO, filepath, index);
}


static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		GRegex* regex = NULL;
		const gchar* _tmp0_ = NULL;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		GRegex* _tmp3_ = NULL;
		GRegex* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GRegex* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch8_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp6_ = regex;
		_tmp7_ = replacement;
		_tmp8_ = g_regex_replace_literal (_tmp6_, self, (gssize) (-1), 0, _tmp7_, 0, &_inner_error_);
		_tmp5_ = _tmp8_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch8_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp9_ = _tmp5_;
		_tmp5_ = NULL;
		result = _tmp9_;
		_g_free0 (_tmp5_);
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally8;
	__catch8_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally8:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static gchar* string_strip (const gchar* self) {
	gchar* result = NULL;
	gchar* _result_ = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup (self);
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	g_strstrip (_tmp1_);
	result = _result_;
	return result;
}


static void font_manager_font_info_post (FontManagerFontInfo* self, const gchar* filepath) {
	gint _tmp0_ = 0;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	const gchar* _tmp12_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (filepath != NULL);
	_tmp0_ = self->status;
	if (_tmp0_ != 0) {
		const gchar* _tmp1_ = NULL;
		gint _tmp2_ = 0;
		_tmp1_ = filepath;
		_tmp2_ = self->status;
		g_warning ("FontInfo.vala:52: Failed to gather information for %s : %i", _tmp1_, _tmp2_);
		return;
	}
	_tmp3_ = self->priv->_version;
	if (_tmp3_ == NULL) {
		font_manager_font_info_set_version (self, "1.0");
		return;
	}
	{
		const gchar** e_collection = NULL;
		gint e_collection_length1 = 0;
		gint _e_collection_size_ = 0;
		gint e_it = 0;
		e_collection = FONT_MANAGER_VERSION_STRING_EXCLUDES;
		e_collection_length1 = G_N_ELEMENTS (FONT_MANAGER_VERSION_STRING_EXCLUDES);
		for (e_it = 0; e_it < G_N_ELEMENTS (FONT_MANAGER_VERSION_STRING_EXCLUDES); e_it = e_it + 1) {
			const gchar* e = NULL;
			e = e_collection[e_it];
			{
				const gchar* _tmp4_ = NULL;
				const gchar* _tmp5_ = NULL;
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				_tmp4_ = self->priv->_version;
				_tmp5_ = e;
				_tmp6_ = string_replace (_tmp4_, _tmp5_, "");
				_tmp7_ = _tmp6_;
				font_manager_font_info_set_version (self, _tmp7_);
				_g_free0 (_tmp7_);
			}
		}
	}
	_tmp8_ = self->priv->_version;
	_tmp9_ = string_strip (_tmp8_);
	_tmp10_ = _tmp9_;
	font_manager_font_info_set_version (self, _tmp10_);
	_g_free0 (_tmp10_);
	_tmp12_ = self->priv->_filetype;
	if (g_strcmp0 (_tmp12_, "CFF") == 0) {
		gboolean _tmp13_ = FALSE;
		const gchar* _tmp14_ = NULL;
		gboolean _tmp15_ = FALSE;
		_tmp14_ = filepath;
		_tmp15_ = g_str_has_suffix (_tmp14_, ".otf");
		if (_tmp15_) {
			_tmp13_ = TRUE;
		} else {
			const gchar* _tmp16_ = NULL;
			gboolean _tmp17_ = FALSE;
			_tmp16_ = filepath;
			_tmp17_ = g_str_has_suffix (_tmp16_, ".ttf");
			_tmp13_ = _tmp17_;
		}
		_tmp11_ = _tmp13_;
	} else {
		_tmp11_ = FALSE;
	}
	if (_tmp11_) {
		font_manager_font_info_set_filetype (self, "OpenType");
	}
	return;
}


FontManagerFontInfo* font_manager_font_info_construct (GType object_type) {
	FontManagerFontInfo * self = NULL;
	self = (FontManagerFontInfo*) cacheable_construct (object_type);
	return self;
}


FontManagerFontInfo* font_manager_font_info_new (void) {
	return font_manager_font_info_construct (FONT_MANAGER_TYPE_FONT_INFO);
}


gint font_manager_font_info_get_owner (FontManagerFontInfo* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_owner;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_owner (FontManagerFontInfo* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_owner = _tmp0_;
	g_object_notify ((GObject *) self, "owner");
}


const gchar* font_manager_font_info_get_filetype (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_filetype;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_filetype (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_filetype);
	self->priv->_filetype = _tmp1_;
	g_object_notify ((GObject *) self, "filetype");
}


const gchar* font_manager_font_info_get_filesize (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_filesize;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_filesize (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_filesize);
	self->priv->_filesize = _tmp1_;
	g_object_notify ((GObject *) self, "filesize");
}


const gchar* font_manager_font_info_get_checksum (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_checksum;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_checksum (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_checksum);
	self->priv->_checksum = _tmp1_;
	g_object_notify ((GObject *) self, "checksum");
}


const gchar* font_manager_font_info_get_version (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_version;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_version (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_version);
	self->priv->_version = _tmp1_;
	g_object_notify ((GObject *) self, "version");
}


const gchar* font_manager_font_info_get_psname (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_psname;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_psname (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_psname);
	self->priv->_psname = _tmp1_;
	g_object_notify ((GObject *) self, "psname");
}


const gchar* font_manager_font_info_get_description (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_description;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_description (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_description);
	self->priv->_description = _tmp1_;
	g_object_notify ((GObject *) self, "description");
}


const gchar* font_manager_font_info_get_vendor (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_vendor;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_vendor (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_vendor);
	self->priv->_vendor = _tmp1_;
	g_object_notify ((GObject *) self, "vendor");
}


const gchar* font_manager_font_info_get_copyright (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_copyright;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_copyright (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_copyright);
	self->priv->_copyright = _tmp1_;
	g_object_notify ((GObject *) self, "copyright");
}


const gchar* font_manager_font_info_get_license_type (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_license_type;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_license_type (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_license_type);
	self->priv->_license_type = _tmp1_;
	g_object_notify ((GObject *) self, "license-type");
}


const gchar* font_manager_font_info_get_license_data (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_license_data;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_license_data (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_license_data);
	self->priv->_license_data = _tmp1_;
	g_object_notify ((GObject *) self, "license-data");
}


const gchar* font_manager_font_info_get_license_url (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_license_url;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_license_url (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_license_url);
	self->priv->_license_url = _tmp1_;
	g_object_notify ((GObject *) self, "license-url");
}


const gchar* font_manager_font_info_get_panose (FontManagerFontInfo* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_panose;
	result = _tmp0_;
	return result;
}


void font_manager_font_info_set_panose (FontManagerFontInfo* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_panose);
	self->priv->_panose = _tmp1_;
	g_object_notify ((GObject *) self, "panose");
}


static void font_manager_font_info_class_init (FontManagerFontInfoClass * klass) {
	font_manager_font_info_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerFontInfoPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_font_manager_font_info_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_manager_font_info_set_property;
	G_OBJECT_CLASS (klass)->finalize = font_manager_font_info_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_OWNER, g_param_spec_int ("owner", "owner", "owner", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_FILETYPE, g_param_spec_string ("filetype", "filetype", "filetype", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_FILESIZE, g_param_spec_string ("filesize", "filesize", "filesize", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_CHECKSUM, g_param_spec_string ("checksum", "checksum", "checksum", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_VERSION, g_param_spec_string ("version", "version", "version", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_PSNAME, g_param_spec_string ("psname", "psname", "psname", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_DESCRIPTION, g_param_spec_string ("description", "description", "description", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_VENDOR, g_param_spec_string ("vendor", "vendor", "vendor", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_COPYRIGHT, g_param_spec_string ("copyright", "copyright", "copyright", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_LICENSE_TYPE, g_param_spec_string ("license-type", "license-type", "license-type", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_LICENSE_DATA, g_param_spec_string ("license-data", "license-data", "license-data", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_LICENSE_URL, g_param_spec_string ("license-url", "license-url", "license-url", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_FONT_INFO_PANOSE, g_param_spec_string ("panose", "panose", "panose", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void font_manager_font_info_instance_init (FontManagerFontInfo * self) {
	self->priv = FONT_MANAGER_FONT_INFO_GET_PRIVATE (self);
	self->priv->_owner = 0;
	self->priv->_filetype = NULL;
	self->priv->_filesize = NULL;
	self->priv->_checksum = NULL;
	self->priv->_version = NULL;
	self->priv->_psname = NULL;
	self->priv->_description = NULL;
	self->priv->_vendor = NULL;
	self->priv->_copyright = NULL;
	self->priv->_license_type = NULL;
	self->priv->_license_data = NULL;
	self->priv->_license_url = NULL;
	self->priv->_panose = NULL;
}


static void font_manager_font_info_finalize (GObject* obj) {
	FontManagerFontInfo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfo);
	_g_free0 (self->priv->_filetype);
	_g_free0 (self->priv->_filesize);
	_g_free0 (self->priv->_checksum);
	_g_free0 (self->priv->_version);
	_g_free0 (self->priv->_psname);
	_g_free0 (self->priv->_description);
	_g_free0 (self->priv->_vendor);
	_g_free0 (self->priv->_copyright);
	_g_free0 (self->priv->_license_type);
	_g_free0 (self->priv->_license_data);
	_g_free0 (self->priv->_license_url);
	_g_free0 (self->priv->_panose);
	G_OBJECT_CLASS (font_manager_font_info_parent_class)->finalize (obj);
}


GType font_manager_font_info_get_type (void) {
	static volatile gsize font_manager_font_info_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_font_info_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerFontInfoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_font_info_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerFontInfo), 0, (GInstanceInitFunc) font_manager_font_info_instance_init, NULL };
		GType font_manager_font_info_type_id;
		font_manager_font_info_type_id = g_type_register_static (TYPE_CACHEABLE, "FontManagerFontInfo", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_font_info_type_id__volatile, font_manager_font_info_type_id);
	}
	return font_manager_font_info_type_id__volatile;
}


static void _vala_font_manager_font_info_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontManagerFontInfo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfo);
	switch (property_id) {
		case FONT_MANAGER_FONT_INFO_OWNER:
		g_value_set_int (value, font_manager_font_info_get_owner (self));
		break;
		case FONT_MANAGER_FONT_INFO_FILETYPE:
		g_value_set_string (value, font_manager_font_info_get_filetype (self));
		break;
		case FONT_MANAGER_FONT_INFO_FILESIZE:
		g_value_set_string (value, font_manager_font_info_get_filesize (self));
		break;
		case FONT_MANAGER_FONT_INFO_CHECKSUM:
		g_value_set_string (value, font_manager_font_info_get_checksum (self));
		break;
		case FONT_MANAGER_FONT_INFO_VERSION:
		g_value_set_string (value, font_manager_font_info_get_version (self));
		break;
		case FONT_MANAGER_FONT_INFO_PSNAME:
		g_value_set_string (value, font_manager_font_info_get_psname (self));
		break;
		case FONT_MANAGER_FONT_INFO_DESCRIPTION:
		g_value_set_string (value, font_manager_font_info_get_description (self));
		break;
		case FONT_MANAGER_FONT_INFO_VENDOR:
		g_value_set_string (value, font_manager_font_info_get_vendor (self));
		break;
		case FONT_MANAGER_FONT_INFO_COPYRIGHT:
		g_value_set_string (value, font_manager_font_info_get_copyright (self));
		break;
		case FONT_MANAGER_FONT_INFO_LICENSE_TYPE:
		g_value_set_string (value, font_manager_font_info_get_license_type (self));
		break;
		case FONT_MANAGER_FONT_INFO_LICENSE_DATA:
		g_value_set_string (value, font_manager_font_info_get_license_data (self));
		break;
		case FONT_MANAGER_FONT_INFO_LICENSE_URL:
		g_value_set_string (value, font_manager_font_info_get_license_url (self));
		break;
		case FONT_MANAGER_FONT_INFO_PANOSE:
		g_value_set_string (value, font_manager_font_info_get_panose (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_manager_font_info_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontManagerFontInfo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_FONT_INFO, FontManagerFontInfo);
	switch (property_id) {
		case FONT_MANAGER_FONT_INFO_OWNER:
		font_manager_font_info_set_owner (self, g_value_get_int (value));
		break;
		case FONT_MANAGER_FONT_INFO_FILETYPE:
		font_manager_font_info_set_filetype (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_FILESIZE:
		font_manager_font_info_set_filesize (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_CHECKSUM:
		font_manager_font_info_set_checksum (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_VERSION:
		font_manager_font_info_set_version (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_PSNAME:
		font_manager_font_info_set_psname (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_DESCRIPTION:
		font_manager_font_info_set_description (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_VENDOR:
		font_manager_font_info_set_vendor (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_COPYRIGHT:
		font_manager_font_info_set_copyright (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_LICENSE_TYPE:
		font_manager_font_info_set_license_type (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_LICENSE_DATA:
		font_manager_font_info_set_license_data (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_LICENSE_URL:
		font_manager_font_info_set_license_url (self, g_value_get_string (value));
		break;
		case FONT_MANAGER_FONT_INFO_PANOSE:
		font_manager_font_info_set_panose (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


