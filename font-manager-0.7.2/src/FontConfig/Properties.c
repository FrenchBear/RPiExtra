/* Properties.c generated by valac 0.26.1, the Vala compiler
 * generated from Properties.vala, do not modify */

/* Properties.vala
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
#include <stdlib.h>
#include <string.h>
#include <libxml/tree.h>
#include <libxml/xmlwriter.h>
#include <gee.h>
#include <glib/gstdio.h>
#include <libxml/parser.h>
#include <float.h>
#include <math.h>


#define FONT_CONFIG_TYPE_PROPERTIES (font_config_properties_get_type ())
#define FONT_CONFIG_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_CONFIG_TYPE_PROPERTIES, FontConfigProperties))
#define FONT_CONFIG_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_CONFIG_TYPE_PROPERTIES, FontConfigPropertiesClass))
#define FONT_CONFIG_IS_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_CONFIG_TYPE_PROPERTIES))
#define FONT_CONFIG_IS_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_CONFIG_TYPE_PROPERTIES))
#define FONT_CONFIG_PROPERTIES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_CONFIG_TYPE_PROPERTIES, FontConfigPropertiesClass))

typedef struct _FontConfigProperties FontConfigProperties;
typedef struct _FontConfigPropertiesClass FontConfigPropertiesClass;
typedef struct _FontConfigPropertiesPrivate FontConfigPropertiesPrivate;
typedef xmlTextWriter FontConfigXmlWriter;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _xmlFreeTextWriter0(var) ((var == NULL) ? NULL : (var = (xmlFreeTextWriter (var), NULL)))
#define _g_param_spec_unref0(var) ((var == NULL) ? NULL : (var = (g_param_spec_unref (var), NULL)))

struct _FontConfigProperties {
	GObject parent_instance;
	FontConfigPropertiesPrivate * priv;
	GeeArrayList* skip_property_assignment;
};

struct _FontConfigPropertiesClass {
	GObjectClass parent_class;
	gchar* (*get_config_file) (FontConfigProperties* self);
	void (*reset_properties) (FontConfigProperties* self);
	gboolean (*load) (FontConfigProperties* self, const gchar* target);
	gboolean (*save) (FontConfigProperties* self);
	gboolean (*discard) (FontConfigProperties* self);
	void (*load_assignments) (FontConfigProperties* self, const gchar* target_file);
	void (*parse_edit_node) (FontConfigProperties* self, xmlNode* iter);
	void (*parse_test_node) (FontConfigProperties* self, xmlNode* iter);
	void (*parse_node) (FontConfigProperties* self, xmlNode* node);
	gchar* (*type_to_string) (FontConfigProperties* self, GType t);
	gchar* (*value_to_string) (FontConfigProperties* self, const gchar* type, GValue* val);
	void (*write_assignments) (FontConfigProperties* self, FontConfigXmlWriter* writer);
	void (*write_match_criteria) (FontConfigProperties* self, FontConfigXmlWriter* writer);
};

struct _FontConfigPropertiesPrivate {
	gchar* _target_file;
};


static gpointer font_config_properties_parent_class = NULL;
extern gboolean font_config_properties_skip_save;
gboolean font_config_properties_skip_save = FALSE;

GType font_config_properties_get_type (void) G_GNUC_CONST;
#define FONT_CONFIG_PROPERTIES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_CONFIG_TYPE_PROPERTIES, FontConfigPropertiesPrivate))
enum  {
	FONT_CONFIG_PROPERTIES_DUMMY_PROPERTY,
	FONT_CONFIG_PROPERTIES_TARGET_FILE
};
gchar* font_config_properties_get_config_file (FontConfigProperties* self);
static gchar* font_config_properties_real_get_config_file (FontConfigProperties* self);
const gchar* font_config_properties_get_target_file (FontConfigProperties* self);
void font_config_properties_reset_properties (FontConfigProperties* self);
static void font_config_properties_real_reset_properties (FontConfigProperties* self);
gboolean font_config_properties_load (FontConfigProperties* self, const gchar* target);
static gboolean font_config_properties_real_load (FontConfigProperties* self, const gchar* target);
void font_config_properties_load_assignments (FontConfigProperties* self, const gchar* target_file);
gboolean font_config_properties_save (FontConfigProperties* self);
static gboolean font_config_properties_real_save (FontConfigProperties* self);
FontConfigXmlWriter* font_config_xml_writer_new (const gchar* filepath);
FontConfigXmlWriter* font_config_xml_writer_new (const gchar* filepath);
void font_config_properties_write_match_criteria (FontConfigProperties* self, FontConfigXmlWriter* writer);
void font_config_properties_write_assignments (FontConfigProperties* self, FontConfigXmlWriter* writer);
void font_config_xml_writer_close (FontConfigXmlWriter* self);
gboolean font_config_properties_discard (FontConfigProperties* self);
static gboolean font_config_properties_real_discard (FontConfigProperties* self);
static void font_config_properties_real_load_assignments (FontConfigProperties* self, const gchar* target_file);
void font_config_properties_parse_node (FontConfigProperties* self, xmlNode* node);
void font_config_properties_parse_edit_node (FontConfigProperties* self, xmlNode* iter);
static void font_config_properties_real_parse_edit_node (FontConfigProperties* self, xmlNode* iter);
void font_config_properties_parse_test_node (FontConfigProperties* self, xmlNode* iter);
static void font_config_properties_real_parse_test_node (FontConfigProperties* self, xmlNode* iter);
static void font_config_properties_real_parse_node (FontConfigProperties* self, xmlNode* node);
gchar* font_config_properties_type_to_string (FontConfigProperties* self, GType t);
static gchar* font_config_properties_real_type_to_string (FontConfigProperties* self, GType t);
gchar* font_config_properties_value_to_string (FontConfigProperties* self, const gchar* type, GValue* val);
static gchar* font_config_properties_real_value_to_string (FontConfigProperties* self, const gchar* type, GValue* val);
static void font_config_properties_real_write_assignments (FontConfigProperties* self, FontConfigXmlWriter* writer);
void font_config_xml_writer_write_assignment (FontConfigXmlWriter* self, const gchar* name, const gchar* type, const gchar* val);
static void font_config_properties_real_write_match_criteria (FontConfigProperties* self, FontConfigXmlWriter* writer);
FontConfigProperties* font_config_properties_new (void);
FontConfigProperties* font_config_properties_construct (GType object_type);
void font_config_properties_set_target_file (FontConfigProperties* self, const gchar* value);
static GObject * font_config_properties_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void font_config_properties_finalize (GObject* obj);
static void _vala_font_config_properties_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_config_properties_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gchar* font_config_properties_real_get_config_file (FontConfigProperties* self) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	_tmp0_ = self->priv->_target_file;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}


gchar* font_config_properties_get_config_file (FontConfigProperties* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FONT_CONFIG_PROPERTIES_GET_CLASS (self)->get_config_file (self);
}


static void font_config_properties_real_reset_properties (FontConfigProperties* self) {
	return;
}


void font_config_properties_reset_properties (FontConfigProperties* self) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->reset_properties (self);
}


static gboolean font_config_properties_real_load (FontConfigProperties* self, const gchar* target) {
	gboolean result = FALSE;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = target;
	if (_tmp0_ == NULL) {
		const gchar* _tmp1_ = NULL;
		_tmp1_ = self->priv->_target_file;
		target = _tmp1_;
	}
	_tmp2_ = target;
	_tmp3_ = g_file_test (_tmp2_, G_FILE_TEST_EXISTS);
	if (_tmp3_) {
		const gchar* _tmp4_ = NULL;
		_tmp4_ = target;
		font_config_properties_load_assignments (self, _tmp4_);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


gboolean font_config_properties_load (FontConfigProperties* self, const gchar* target) {
	g_return_val_if_fail (self != NULL, FALSE);
	return FONT_CONFIG_PROPERTIES_GET_CLASS (self)->load (self, target);
}


static gboolean font_config_properties_real_save (FontConfigProperties* self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	FontConfigXmlWriter* writer = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	FontConfigXmlWriter* _tmp3_ = NULL;
	FontConfigXmlWriter* _tmp4_ = NULL;
	FontConfigXmlWriter* _tmp5_ = NULL;
	FontConfigXmlWriter* _tmp6_ = NULL;
	FontConfigXmlWriter* _tmp7_ = NULL;
	FontConfigXmlWriter* _tmp8_ = NULL;
	FontConfigXmlWriter* _tmp9_ = NULL;
	FontConfigXmlWriter* _tmp10_ = NULL;
	_tmp0_ = font_config_properties_skip_save;
	if (_tmp0_) {
		result = FALSE;
		return result;
	}
	_tmp1_ = font_config_properties_get_config_file (self);
	_tmp2_ = _tmp1_;
	_tmp3_ = font_config_xml_writer_new (_tmp2_);
	_tmp4_ = _tmp3_;
	_g_free0 (_tmp2_);
	writer = _tmp4_;
	_tmp5_ = writer;
	xmlTextWriterStartElement ((xmlTextWriter*) _tmp5_, (xmlChar*) "match");
	_tmp6_ = writer;
	xmlTextWriterWriteAttribute ((xmlTextWriter*) _tmp6_, (xmlChar*) "target", (xmlChar*) "font");
	_tmp7_ = writer;
	font_config_properties_write_match_criteria (self, _tmp7_);
	_tmp8_ = writer;
	font_config_properties_write_assignments (self, _tmp8_);
	_tmp9_ = writer;
	xmlTextWriterEndElement ((xmlTextWriter*) _tmp9_);
	_tmp10_ = writer;
	font_config_xml_writer_close (_tmp10_);
	result = TRUE;
	_xmlFreeTextWriter0 (writer);
	return result;
}


gboolean font_config_properties_save (FontConfigProperties* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return FONT_CONFIG_PROPERTIES_GET_CLASS (self)->save (self);
}


static gboolean font_config_properties_real_discard (FontConfigProperties* self) {
	gboolean result = FALSE;
	gchar* target = NULL;
	gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	FontConfigXmlWriter* writer = NULL;
	const gchar* _tmp6_ = NULL;
	FontConfigXmlWriter* _tmp7_ = NULL;
	FontConfigXmlWriter* _tmp8_ = NULL;
	_tmp0_ = font_config_properties_get_config_file (self);
	target = _tmp0_;
	_tmp2_ = target;
	_tmp3_ = g_file_test (_tmp2_, G_FILE_TEST_EXISTS);
	if (_tmp3_) {
		const gchar* _tmp4_ = NULL;
		gint _tmp5_ = 0;
		_tmp4_ = target;
		_tmp5_ = g_remove (_tmp4_);
		_tmp1_ = _tmp5_ != 0;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		result = FALSE;
		_g_free0 (target);
		return result;
	}
	_tmp6_ = target;
	_tmp7_ = font_config_xml_writer_new (_tmp6_);
	writer = _tmp7_;
	_tmp8_ = writer;
	font_config_xml_writer_close (_tmp8_);
	font_config_properties_reset_properties (self);
	result = TRUE;
	_xmlFreeTextWriter0 (writer);
	_g_free0 (target);
	return result;
}


gboolean font_config_properties_discard (FontConfigProperties* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return FONT_CONFIG_PROPERTIES_GET_CLASS (self)->discard (self);
}


static void font_config_properties_real_load_assignments (FontConfigProperties* self, const gchar* target_file) {
	xmlDoc* doc = NULL;
	const gchar* _tmp0_ = NULL;
	xmlDoc* _tmp1_ = NULL;
	xmlDoc* _tmp2_ = NULL;
	xmlNode* root = NULL;
	xmlDoc* _tmp3_ = NULL;
	xmlNode* _tmp4_ = NULL;
	xmlNode* _tmp5_ = NULL;
	xmlDoc* _tmp16_ = NULL;
	g_return_if_fail (target_file != NULL);
	xmlInitParser ();
	_tmp0_ = target_file;
	_tmp1_ = xmlParseFile (_tmp0_);
	doc = _tmp1_;
	_tmp2_ = doc;
	if (_tmp2_ == NULL) {
		xmlCleanupParser ();
		return;
	}
	_tmp3_ = doc;
	_tmp4_ = xmlDocGetRootElement (_tmp3_);
	root = _tmp4_;
	_tmp5_ = root;
	if (_tmp5_ == NULL) {
		xmlDoc* _tmp6_ = NULL;
		_tmp6_ = doc;
		xmlFreeDoc (_tmp6_);
		xmlCleanupParser ();
		return;
	}
	{
		xmlNode* iter = NULL;
		xmlNode* _tmp7_ = NULL;
		xmlNode* _tmp8_ = NULL;
		_tmp7_ = root;
		_tmp8_ = _tmp7_->children;
		iter = _tmp8_;
		{
			gboolean _tmp9_ = FALSE;
			_tmp9_ = TRUE;
			while (TRUE) {
				xmlNode* _tmp12_ = NULL;
				xmlNode* _tmp13_ = NULL;
				const gchar* _tmp14_ = NULL;
				if (!_tmp9_) {
					xmlNode* _tmp10_ = NULL;
					xmlNode* _tmp11_ = NULL;
					_tmp10_ = iter;
					_tmp11_ = _tmp10_->next;
					iter = _tmp11_;
				}
				_tmp9_ = FALSE;
				_tmp12_ = iter;
				if (!(_tmp12_ != NULL)) {
					break;
				}
				_tmp13_ = iter;
				_tmp14_ = _tmp13_->name;
				if (g_strcmp0 (_tmp14_, "match") == 0) {
					xmlNode* _tmp15_ = NULL;
					_tmp15_ = iter;
					font_config_properties_parse_node (self, _tmp15_);
					break;
				}
			}
		}
	}
	_tmp16_ = doc;
	xmlFreeDoc (_tmp16_);
	xmlCleanupParser ();
	return;
}


void font_config_properties_load_assignments (FontConfigProperties* self, const gchar* target_file) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->load_assignments (self, target_file);
}


static gboolean bool_parse (const gchar* str) {
	gboolean result = FALSE;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (str != NULL, FALSE);
	_tmp0_ = str;
	if (g_strcmp0 (_tmp0_, "true") == 0) {
		result = TRUE;
		return result;
	} else {
		result = FALSE;
		return result;
	}
}


static gdouble double_parse (const gchar* str) {
	gdouble result = 0.0;
	const gchar* _tmp0_ = NULL;
	gdouble _tmp1_ = 0.0;
	g_return_val_if_fail (str != NULL, 0.0);
	_tmp0_ = str;
	_tmp1_ = g_ascii_strtod (_tmp0_, NULL);
	result = _tmp1_;
	return result;
}


static void font_config_properties_real_parse_edit_node (FontConfigProperties* self, xmlNode* iter) {
	gchar* pname = NULL;
	gchar* pval = NULL;
	pname = NULL;
	pval = NULL;
	{
		xmlAttr* prop = NULL;
		xmlNode* _tmp0_ = NULL;
		xmlAttr* _tmp1_ = NULL;
		_tmp0_ = iter;
		_tmp1_ = _tmp0_->properties;
		prop = _tmp1_;
		{
			gboolean _tmp2_ = FALSE;
			_tmp2_ = TRUE;
			while (TRUE) {
				xmlAttr* _tmp5_ = NULL;
				xmlAttr* _tmp6_ = NULL;
				const gchar* _tmp7_ = NULL;
				if (!_tmp2_) {
					xmlAttr* _tmp3_ = NULL;
					xmlAttr* _tmp4_ = NULL;
					_tmp3_ = prop;
					_tmp4_ = _tmp3_->next;
					prop = _tmp4_;
				}
				_tmp2_ = FALSE;
				_tmp5_ = prop;
				if (!(_tmp5_ != NULL)) {
					break;
				}
				_tmp6_ = prop;
				_tmp7_ = _tmp6_->name;
				if (g_strcmp0 (_tmp7_, "name") == 0) {
					xmlAttr* _tmp8_ = NULL;
					xmlNode* _tmp9_ = NULL;
					const gchar* _tmp10_ = NULL;
					gchar* _tmp11_ = NULL;
					_tmp8_ = prop;
					_tmp9_ = _tmp8_->children;
					_tmp10_ = _tmp9_->content;
					_tmp11_ = g_strdup (_tmp10_);
					_g_free0 (pname);
					pname = _tmp11_;
					break;
				}
			}
		}
	}
	{
		xmlNode* val = NULL;
		xmlNode* _tmp12_ = NULL;
		xmlNode* _tmp13_ = NULL;
		_tmp12_ = iter;
		_tmp13_ = _tmp12_->children;
		val = _tmp13_;
		{
			gboolean _tmp14_ = FALSE;
			_tmp14_ = TRUE;
			while (TRUE) {
				xmlNode* _tmp17_ = NULL;
				xmlNode* _tmp18_ = NULL;
				gchar* _tmp19_ = NULL;
				const gchar* _tmp20_ = NULL;
				xmlNode* _tmp21_ = NULL;
				const gchar* _tmp22_ = NULL;
				if (!_tmp14_) {
					xmlNode* _tmp15_ = NULL;
					xmlNode* _tmp16_ = NULL;
					_tmp15_ = val;
					_tmp16_ = _tmp15_->next;
					val = _tmp16_;
				}
				_tmp14_ = FALSE;
				_tmp17_ = val;
				if (!(_tmp17_ != NULL)) {
					break;
				}
				_tmp18_ = val;
				_tmp19_ = (gchar*) xmlNodeGetContent (_tmp18_);
				_g_free0 (pval);
				pval = _tmp19_;
				_tmp20_ = pval;
				if (_tmp20_ == NULL) {
					continue;
				}
				_tmp21_ = val;
				_tmp22_ = _tmp21_->name;
				if (g_strcmp0 (_tmp22_, "bool") == 0) {
					const gchar* _tmp23_ = NULL;
					const gchar* _tmp24_ = NULL;
					gboolean _tmp25_ = FALSE;
					_tmp23_ = pname;
					_tmp24_ = pval;
					_tmp25_ = bool_parse (_tmp24_);
					g_object_set ((GObject*) self, _tmp23_, _tmp25_, NULL);
				} else {
					xmlNode* _tmp26_ = NULL;
					const gchar* _tmp27_ = NULL;
					_tmp26_ = val;
					_tmp27_ = _tmp26_->name;
					if (g_strcmp0 (_tmp27_, "int") == 0) {
						const gchar* _tmp28_ = NULL;
						const gchar* _tmp29_ = NULL;
						gint _tmp30_ = 0;
						_tmp28_ = pname;
						_tmp29_ = pval;
						_tmp30_ = atoi (_tmp29_);
						g_object_set ((GObject*) self, _tmp28_, _tmp30_, NULL);
					} else {
						xmlNode* _tmp31_ = NULL;
						const gchar* _tmp32_ = NULL;
						_tmp31_ = val;
						_tmp32_ = _tmp31_->name;
						if (g_strcmp0 (_tmp32_, "double") == 0) {
							const gchar* _tmp33_ = NULL;
							const gchar* _tmp34_ = NULL;
							gdouble _tmp35_ = 0.0;
							_tmp33_ = pname;
							_tmp34_ = pval;
							_tmp35_ = double_parse (_tmp34_);
							g_object_set ((GObject*) self, _tmp33_, _tmp35_, NULL);
						} else {
							xmlNode* _tmp36_ = NULL;
							const gchar* _tmp37_ = NULL;
							_tmp36_ = val;
							_tmp37_ = _tmp36_->name;
							if (g_strcmp0 (_tmp37_, "string") == 0) {
								const gchar* _tmp38_ = NULL;
								const gchar* _tmp39_ = NULL;
								_tmp38_ = pname;
								_tmp39_ = pval;
								g_object_set ((GObject*) self, _tmp38_, _tmp39_, NULL);
							}
						}
					}
				}
			}
		}
	}
	_g_free0 (pval);
	_g_free0 (pname);
	return;
}


void font_config_properties_parse_edit_node (FontConfigProperties* self, xmlNode* iter) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->parse_edit_node (self, iter);
}


static void font_config_properties_real_parse_test_node (FontConfigProperties* self, xmlNode* iter) {
	return;
}


void font_config_properties_parse_test_node (FontConfigProperties* self, xmlNode* iter) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->parse_test_node (self, iter);
}


static void font_config_properties_real_parse_node (FontConfigProperties* self, xmlNode* node) {
	{
		xmlNode* iter = NULL;
		xmlNode* _tmp0_ = NULL;
		xmlNode* _tmp1_ = NULL;
		_tmp0_ = node;
		_tmp1_ = _tmp0_->children;
		iter = _tmp1_;
		{
			gboolean _tmp2_ = FALSE;
			_tmp2_ = TRUE;
			while (TRUE) {
				xmlNode* _tmp5_ = NULL;
				xmlNode* _tmp6_ = NULL;
				xmlElementType _tmp7_ = 0;
				if (!_tmp2_) {
					xmlNode* _tmp3_ = NULL;
					xmlNode* _tmp4_ = NULL;
					_tmp3_ = iter;
					_tmp4_ = _tmp3_->next;
					iter = _tmp4_;
				}
				_tmp2_ = FALSE;
				_tmp5_ = iter;
				if (!(_tmp5_ != NULL)) {
					break;
				}
				_tmp6_ = iter;
				_tmp7_ = _tmp6_->type;
				if (_tmp7_ != XML_ELEMENT_NODE) {
					continue;
				} else {
					xmlNode* _tmp8_ = NULL;
					const gchar* _tmp9_ = NULL;
					_tmp8_ = iter;
					_tmp9_ = _tmp8_->name;
					if (g_strcmp0 (_tmp9_, "edit") == 0) {
						xmlNode* _tmp10_ = NULL;
						_tmp10_ = iter;
						font_config_properties_parse_edit_node (self, _tmp10_);
					} else {
						xmlNode* _tmp11_ = NULL;
						const gchar* _tmp12_ = NULL;
						_tmp11_ = iter;
						_tmp12_ = _tmp11_->name;
						if (g_strcmp0 (_tmp12_, "test") == 0) {
							xmlNode* _tmp13_ = NULL;
							_tmp13_ = iter;
							font_config_properties_parse_test_node (self, _tmp13_);
						}
					}
				}
			}
		}
	}
	return;
}


void font_config_properties_parse_node (FontConfigProperties* self, xmlNode* node) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->parse_node (self, node);
}


static gchar* font_config_properties_real_type_to_string (FontConfigProperties* self, GType t) {
	gchar* result = NULL;
	GType _tmp0_ = 0UL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	GQuark _tmp4_ = 0U;
	static GQuark _tmp3_label0 = 0;
	static GQuark _tmp3_label1 = 0;
	static GQuark _tmp3_label2 = 0;
	static GQuark _tmp3_label3 = 0;
	_tmp0_ = t;
	_tmp1_ = g_type_name (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp4_ = (NULL == _tmp2_) ? 0 : g_quark_from_string (_tmp2_);
	if (_tmp4_ == ((0 != _tmp3_label0) ? _tmp3_label0 : (_tmp3_label0 = g_quark_from_static_string ("gint")))) {
		switch (0) {
			default:
			{
				gchar* _tmp5_ = NULL;
				_tmp5_ = g_strdup ("int");
				result = _tmp5_;
				return result;
			}
		}
	} else if (_tmp4_ == ((0 != _tmp3_label1) ? _tmp3_label1 : (_tmp3_label1 = g_quark_from_static_string ("gboolean")))) {
		switch (0) {
			default:
			{
				gchar* _tmp6_ = NULL;
				_tmp6_ = g_strdup ("bool");
				result = _tmp6_;
				return result;
			}
		}
	} else if (_tmp4_ == ((0 != _tmp3_label2) ? _tmp3_label2 : (_tmp3_label2 = g_quark_from_static_string ("gchararray")))) {
		switch (0) {
			default:
			{
				gchar* _tmp7_ = NULL;
				_tmp7_ = g_strdup ("string");
				result = _tmp7_;
				return result;
			}
		}
	} else if (_tmp4_ == ((0 != _tmp3_label3) ? _tmp3_label3 : (_tmp3_label3 = g_quark_from_static_string ("gdouble")))) {
		switch (0) {
			default:
			{
				gchar* _tmp8_ = NULL;
				_tmp8_ = g_strdup ("double");
				result = _tmp8_;
				return result;
			}
		}
	} else {
		switch (0) {
			default:
			{
				result = NULL;
				return result;
			}
		}
	}
}


gchar* font_config_properties_type_to_string (FontConfigProperties* self, GType t) {
	g_return_val_if_fail (self != NULL, NULL);
	return FONT_CONFIG_PROPERTIES_GET_CLASS (self)->type_to_string (self, t);
}


static gchar* bool_to_string (gboolean self) {
	gchar* result = NULL;
	if (self) {
		gchar* _tmp0_ = NULL;
		_tmp0_ = g_strdup ("true");
		result = _tmp0_;
		return result;
	} else {
		gchar* _tmp1_ = NULL;
		_tmp1_ = g_strdup ("false");
		result = _tmp1_;
		return result;
	}
}


static gchar* double_to_string (gdouble self) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	_tmp0_ = g_new0 (gchar, G_ASCII_DTOSTR_BUF_SIZE);
	_tmp1_ = _tmp0_;
	_tmp1__length1 = G_ASCII_DTOSTR_BUF_SIZE;
	_tmp2_ = g_ascii_dtostr (_tmp1_, G_ASCII_DTOSTR_BUF_SIZE, self);
	_tmp3_ = g_strdup (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp1_ = (g_free (_tmp1_), NULL);
	result = _tmp4_;
	return result;
}


static gchar* font_config_properties_real_value_to_string (FontConfigProperties* self, const gchar* type, GValue* val) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GQuark _tmp3_ = 0U;
	static GQuark _tmp2_label0 = 0;
	static GQuark _tmp2_label1 = 0;
	static GQuark _tmp2_label2 = 0;
	static GQuark _tmp2_label3 = 0;
	g_return_val_if_fail (type != NULL, NULL);
	g_return_val_if_fail (val != NULL, NULL);
	_tmp0_ = type;
	_tmp1_ = _tmp0_;
	_tmp3_ = (NULL == _tmp1_) ? 0 : g_quark_from_string (_tmp1_);
	if (_tmp3_ == ((0 != _tmp2_label0) ? _tmp2_label0 : (_tmp2_label0 = g_quark_from_static_string ("int")))) {
		switch (0) {
			default:
			{
				GValue _tmp4_ = {0};
				gchar* _tmp5_ = NULL;
				_tmp4_ = *val;
				_tmp5_ = g_strdup_printf ("%i", g_value_get_int (&_tmp4_));
				result = _tmp5_;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label1) ? _tmp2_label1 : (_tmp2_label1 = g_quark_from_static_string ("bool")))) {
		switch (0) {
			default:
			{
				GValue _tmp6_ = {0};
				gchar* _tmp7_ = NULL;
				_tmp6_ = *val;
				_tmp7_ = bool_to_string (g_value_get_boolean (&_tmp6_));
				result = _tmp7_;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label2) ? _tmp2_label2 : (_tmp2_label2 = g_quark_from_static_string ("string")))) {
		switch (0) {
			default:
			{
				GValue _tmp8_ = {0};
				gchar* _tmp9_ = NULL;
				_tmp8_ = *val;
				_tmp9_ = g_strdup (g_value_get_string (&_tmp8_));
				result = _tmp9_;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label3) ? _tmp2_label3 : (_tmp2_label3 = g_quark_from_static_string ("double")))) {
		switch (0) {
			default:
			{
				GValue _tmp10_ = {0};
				gchar* _tmp11_ = NULL;
				_tmp10_ = *val;
				_tmp11_ = double_to_string (g_value_get_double (&_tmp10_));
				result = _tmp11_;
				return result;
			}
		}
	} else {
		switch (0) {
			default:
			{
				result = NULL;
				return result;
			}
		}
	}
}


gchar* font_config_properties_value_to_string (FontConfigProperties* self, const gchar* type, GValue* val) {
	g_return_val_if_fail (self != NULL, NULL);
	return FONT_CONFIG_PROPERTIES_GET_CLASS (self)->value_to_string (self, type, val);
}


static gpointer _g_param_spec_ref0 (gpointer self) {
	return self ? g_param_spec_ref (self) : NULL;
}


static void font_config_properties_real_write_assignments (FontConfigProperties* self, FontConfigXmlWriter* writer) {
	GObjectClass* _tmp0_ = NULL;
	guint _tmp1_;
	GParamSpec** _tmp2_ = NULL;
	g_return_if_fail (writer != NULL);
	_tmp0_ = G_OBJECT_GET_CLASS ((GObject*) self);
	_tmp2_ = g_object_class_list_properties (_tmp0_, &_tmp1_);
	{
		GParamSpec** pspec_collection = NULL;
		gint pspec_collection_length1 = 0;
		gint _pspec_collection_size_ = 0;
		gint pspec_it = 0;
		pspec_collection = _tmp2_;
		pspec_collection_length1 = _tmp1_;
		for (pspec_it = 0; pspec_it < _tmp1_; pspec_it = pspec_it + 1) {
			GParamSpec* _tmp3_ = NULL;
			GParamSpec* pspec = NULL;
			_tmp3_ = _g_param_spec_ref0 (pspec_collection[pspec_it]);
			pspec = _tmp3_;
			{
				GeeArrayList* _tmp4_ = NULL;
				GParamSpec* _tmp5_ = NULL;
				const gchar* _tmp6_ = NULL;
				gboolean _tmp7_ = FALSE;
				gchar* type = NULL;
				GParamSpec* _tmp8_ = NULL;
				GType _tmp9_ = 0UL;
				gchar* _tmp10_ = NULL;
				const gchar* _tmp11_ = NULL;
				GValue val = {0};
				GParamSpec* _tmp12_ = NULL;
				GType _tmp13_ = 0UL;
				GValue _tmp14_ = {0};
				GParamSpec* _tmp15_ = NULL;
				const gchar* _tmp16_ = NULL;
				gchar* res = NULL;
				const gchar* _tmp17_ = NULL;
				GValue _tmp18_ = {0};
				gchar* _tmp19_ = NULL;
				const gchar* _tmp20_ = NULL;
				_tmp4_ = self->skip_property_assignment;
				_tmp5_ = pspec;
				_tmp6_ = _tmp5_->name;
				_tmp7_ = gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp4_, _tmp6_);
				if (_tmp7_) {
					_g_param_spec_unref0 (pspec);
					continue;
				}
				_tmp8_ = pspec;
				_tmp9_ = _tmp8_->value_type;
				_tmp10_ = font_config_properties_type_to_string (self, _tmp9_);
				type = _tmp10_;
				_tmp11_ = type;
				if (_tmp11_ == NULL) {
					_g_free0 (type);
					_g_param_spec_unref0 (pspec);
					continue;
				}
				_tmp12_ = pspec;
				_tmp13_ = _tmp12_->value_type;
				g_value_init (&_tmp14_, _tmp13_);
				val = _tmp14_;
				_tmp15_ = pspec;
				_tmp16_ = _tmp15_->name;
				g_object_get_property ((GObject*) self, _tmp16_, &val);
				_tmp17_ = type;
				_tmp18_ = val;
				_tmp19_ = font_config_properties_value_to_string (self, _tmp17_, &_tmp18_);
				res = _tmp19_;
				_tmp20_ = res;
				if (_tmp20_ != NULL) {
					FontConfigXmlWriter* _tmp21_ = NULL;
					GParamSpec* _tmp22_ = NULL;
					const gchar* _tmp23_ = NULL;
					const gchar* _tmp24_ = NULL;
					const gchar* _tmp25_ = NULL;
					_tmp21_ = writer;
					_tmp22_ = pspec;
					_tmp23_ = _tmp22_->name;
					_tmp24_ = type;
					_tmp25_ = res;
					font_config_xml_writer_write_assignment (_tmp21_, _tmp23_, _tmp24_, _tmp25_);
				}
				g_value_unset (&val);
				_g_free0 (res);
				G_IS_VALUE (&val) ? (g_value_unset (&val), NULL) : NULL;
				_g_free0 (type);
				_g_param_spec_unref0 (pspec);
			}
		}
	}
	return;
}


void font_config_properties_write_assignments (FontConfigProperties* self, FontConfigXmlWriter* writer) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->write_assignments (self, writer);
}


static void font_config_properties_real_write_match_criteria (FontConfigProperties* self, FontConfigXmlWriter* writer) {
	g_return_if_fail (writer != NULL);
	return;
}


void font_config_properties_write_match_criteria (FontConfigProperties* self, FontConfigXmlWriter* writer) {
	g_return_if_fail (self != NULL);
	FONT_CONFIG_PROPERTIES_GET_CLASS (self)->write_match_criteria (self, writer);
}


FontConfigProperties* font_config_properties_construct (GType object_type) {
	FontConfigProperties * self = NULL;
	self = (FontConfigProperties*) g_object_new (object_type, NULL);
	return self;
}


FontConfigProperties* font_config_properties_new (void) {
	return font_config_properties_construct (FONT_CONFIG_TYPE_PROPERTIES);
}


const gchar* font_config_properties_get_target_file (FontConfigProperties* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_target_file;
	result = _tmp0_;
	return result;
}


void font_config_properties_set_target_file (FontConfigProperties* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_target_file);
	self->priv->_target_file = _tmp1_;
	g_object_notify ((GObject *) self, "target-file");
}


static GObject * font_config_properties_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	FontConfigProperties * self;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	parent_class = G_OBJECT_CLASS (font_config_properties_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_CONFIG_TYPE_PROPERTIES, FontConfigProperties);
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	_g_object_unref0 (self->skip_property_assignment);
	self->skip_property_assignment = _tmp0_;
	_tmp1_ = self->skip_property_assignment;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp1_, "target-file");
	return obj;
}


static void font_config_properties_class_init (FontConfigPropertiesClass * klass) {
	font_config_properties_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontConfigPropertiesPrivate));
	((FontConfigPropertiesClass *) klass)->get_config_file = font_config_properties_real_get_config_file;
	((FontConfigPropertiesClass *) klass)->reset_properties = font_config_properties_real_reset_properties;
	((FontConfigPropertiesClass *) klass)->load = font_config_properties_real_load;
	((FontConfigPropertiesClass *) klass)->save = font_config_properties_real_save;
	((FontConfigPropertiesClass *) klass)->discard = font_config_properties_real_discard;
	((FontConfigPropertiesClass *) klass)->load_assignments = font_config_properties_real_load_assignments;
	((FontConfigPropertiesClass *) klass)->parse_edit_node = font_config_properties_real_parse_edit_node;
	((FontConfigPropertiesClass *) klass)->parse_test_node = font_config_properties_real_parse_test_node;
	((FontConfigPropertiesClass *) klass)->parse_node = font_config_properties_real_parse_node;
	((FontConfigPropertiesClass *) klass)->type_to_string = font_config_properties_real_type_to_string;
	((FontConfigPropertiesClass *) klass)->value_to_string = font_config_properties_real_value_to_string;
	((FontConfigPropertiesClass *) klass)->write_assignments = font_config_properties_real_write_assignments;
	((FontConfigPropertiesClass *) klass)->write_match_criteria = font_config_properties_real_write_match_criteria;
	G_OBJECT_CLASS (klass)->get_property = _vala_font_config_properties_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_config_properties_set_property;
	G_OBJECT_CLASS (klass)->constructor = font_config_properties_constructor;
	G_OBJECT_CLASS (klass)->finalize = font_config_properties_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_CONFIG_PROPERTIES_TARGET_FILE, g_param_spec_string ("target-file", "target-file", "target-file", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void font_config_properties_instance_init (FontConfigProperties * self) {
	gchar* _tmp0_ = NULL;
	self->priv = FONT_CONFIG_PROPERTIES_GET_PRIVATE (self);
	_tmp0_ = g_strdup ("");
	self->priv->_target_file = _tmp0_;
}


static void font_config_properties_finalize (GObject* obj) {
	FontConfigProperties * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_CONFIG_TYPE_PROPERTIES, FontConfigProperties);
	_g_free0 (self->priv->_target_file);
	_g_object_unref0 (self->skip_property_assignment);
	G_OBJECT_CLASS (font_config_properties_parent_class)->finalize (obj);
}


GType font_config_properties_get_type (void) {
	static volatile gsize font_config_properties_type_id__volatile = 0;
	if (g_once_init_enter (&font_config_properties_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontConfigPropertiesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_config_properties_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontConfigProperties), 0, (GInstanceInitFunc) font_config_properties_instance_init, NULL };
		GType font_config_properties_type_id;
		font_config_properties_type_id = g_type_register_static (G_TYPE_OBJECT, "FontConfigProperties", &g_define_type_info, 0);
		g_once_init_leave (&font_config_properties_type_id__volatile, font_config_properties_type_id);
	}
	return font_config_properties_type_id__volatile;
}


static void _vala_font_config_properties_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontConfigProperties * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_CONFIG_TYPE_PROPERTIES, FontConfigProperties);
	switch (property_id) {
		case FONT_CONFIG_PROPERTIES_TARGET_FILE:
		g_value_set_string (value, font_config_properties_get_target_file (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_config_properties_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontConfigProperties * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_CONFIG_TYPE_PROPERTIES, FontConfigProperties);
	switch (property_id) {
		case FONT_CONFIG_PROPERTIES_TARGET_FILE:
		font_config_properties_set_target_file (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



