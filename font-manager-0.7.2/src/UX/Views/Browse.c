/* Browse.c generated by valac 0.26.1, the Vala compiler
 * generated from Browse.vala, do not modify */

/* Browse.vala
 *
 * Copyright © 2009 - 2014 Jerry Casiano
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <float.h>
#include <math.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <pango/pango.h>


#define FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW (font_manager_adjustable_preview_get_type ())
#define FONT_MANAGER_ADJUSTABLE_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreview))
#define FONT_MANAGER_ADJUSTABLE_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreviewClass))
#define FONT_MANAGER_IS_ADJUSTABLE_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW))
#define FONT_MANAGER_IS_ADJUSTABLE_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW))
#define FONT_MANAGER_ADJUSTABLE_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreviewClass))

typedef struct _FontManagerAdjustablePreview FontManagerAdjustablePreview;
typedef struct _FontManagerAdjustablePreviewClass FontManagerAdjustablePreviewClass;
typedef struct _FontManagerAdjustablePreviewPrivate FontManagerAdjustablePreviewPrivate;

#define FONT_MANAGER_TYPE_FONT_SCALE (font_manager_font_scale_get_type ())
#define FONT_MANAGER_FONT_SCALE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_FONT_SCALE, FontManagerFontScale))
#define FONT_MANAGER_FONT_SCALE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_FONT_SCALE, FontManagerFontScaleClass))
#define FONT_MANAGER_IS_FONT_SCALE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_FONT_SCALE))
#define FONT_MANAGER_IS_FONT_SCALE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_FONT_SCALE))
#define FONT_MANAGER_FONT_SCALE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_FONT_SCALE, FontManagerFontScaleClass))

typedef struct _FontManagerFontScale FontManagerFontScale;
typedef struct _FontManagerFontScaleClass FontManagerFontScaleClass;

#define FONT_MANAGER_TYPE_BROWSE (font_manager_browse_get_type ())
#define FONT_MANAGER_BROWSE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_MANAGER_TYPE_BROWSE, FontManagerBrowse))
#define FONT_MANAGER_BROWSE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_MANAGER_TYPE_BROWSE, FontManagerBrowseClass))
#define FONT_MANAGER_IS_BROWSE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_MANAGER_TYPE_BROWSE))
#define FONT_MANAGER_IS_BROWSE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_MANAGER_TYPE_BROWSE))
#define FONT_MANAGER_BROWSE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_MANAGER_TYPE_BROWSE, FontManagerBrowseClass))

typedef struct _FontManagerBrowse FontManagerBrowse;
typedef struct _FontManagerBrowseClass FontManagerBrowseClass;
typedef struct _FontManagerBrowsePrivate FontManagerBrowsePrivate;

#define TYPE_BASE_TREE_VIEW (base_tree_view_get_type ())
#define BASE_TREE_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BASE_TREE_VIEW, BaseTreeView))
#define BASE_TREE_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BASE_TREE_VIEW, BaseTreeViewClass))
#define IS_BASE_TREE_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BASE_TREE_VIEW))
#define IS_BASE_TREE_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BASE_TREE_VIEW))
#define BASE_TREE_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BASE_TREE_VIEW, BaseTreeViewClass))

typedef struct _BaseTreeView BaseTreeView;
typedef struct _BaseTreeViewClass BaseTreeViewClass;

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

#define TYPE_CELL_RENDERER_PILL (cell_renderer_pill_get_type ())
#define CELL_RENDERER_PILL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_RENDERER_PILL, CellRendererPill))
#define CELL_RENDERER_PILL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_RENDERER_PILL, CellRendererPillClass))
#define IS_CELL_RENDERER_PILL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_RENDERER_PILL))
#define IS_CELL_RENDERER_PILL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_RENDERER_PILL))
#define CELL_RENDERER_PILL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_RENDERER_PILL, CellRendererPillClass))

typedef struct _CellRendererPill CellRendererPill;
typedef struct _CellRendererPillClass CellRendererPillClass;

#define TYPE_CELL_RENDERER_TITLE (cell_renderer_title_get_type ())
#define CELL_RENDERER_TITLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_RENDERER_TITLE, CellRendererTitle))
#define CELL_RENDERER_TITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_RENDERER_TITLE, CellRendererTitleClass))
#define IS_CELL_RENDERER_TITLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_RENDERER_TITLE))
#define IS_CELL_RENDERER_TITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_RENDERER_TITLE))
#define CELL_RENDERER_TITLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_RENDERER_TITLE, CellRendererTitleClass))

typedef struct _CellRendererTitle CellRendererTitle;
typedef struct _CellRendererTitleClass CellRendererTitleClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define FONT_MANAGER_TYPE_FONT_MODEL_COLUMN (font_manager_font_model_column_get_type ())

#define TYPE_CACHEABLE (cacheable_get_type ())
#define CACHEABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CACHEABLE, Cacheable))
#define CACHEABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CACHEABLE, CacheableClass))
#define IS_CACHEABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CACHEABLE))
#define IS_CACHEABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CACHEABLE))
#define CACHEABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CACHEABLE, CacheableClass))

typedef struct _Cacheable Cacheable;
typedef struct _CacheableClass CacheableClass;

#define FONT_CONFIG_TYPE_FAMILY (font_config_family_get_type ())
#define FONT_CONFIG_FAMILY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_CONFIG_TYPE_FAMILY, FontConfigFamily))
#define FONT_CONFIG_FAMILY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_CONFIG_TYPE_FAMILY, FontConfigFamilyClass))
#define FONT_CONFIG_IS_FAMILY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_CONFIG_TYPE_FAMILY))
#define FONT_CONFIG_IS_FAMILY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_CONFIG_TYPE_FAMILY))
#define FONT_CONFIG_FAMILY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_CONFIG_TYPE_FAMILY, FontConfigFamilyClass))

typedef struct _FontConfigFamily FontConfigFamily;
typedef struct _FontConfigFamilyClass FontConfigFamilyClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define FONT_CONFIG_TYPE_FONT (font_config_font_get_type ())
#define FONT_CONFIG_FONT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FONT_CONFIG_TYPE_FONT, FontConfigFont))
#define FONT_CONFIG_FONT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FONT_CONFIG_TYPE_FONT, FontConfigFontClass))
#define FONT_CONFIG_IS_FONT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FONT_CONFIG_TYPE_FONT))
#define FONT_CONFIG_IS_FONT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FONT_CONFIG_TYPE_FONT))
#define FONT_CONFIG_FONT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FONT_CONFIG_TYPE_FONT, FontConfigFontClass))

typedef struct _FontConfigFont FontConfigFont;
typedef struct _FontConfigFontClass FontConfigFontClass;
#define __vala_PangoFontDescription_free0(var) ((var == NULL) ? NULL : (var = (_vala_PangoFontDescription_free (var), NULL)))

struct _FontManagerAdjustablePreview {
	GtkBox parent_instance;
	FontManagerAdjustablePreviewPrivate * priv;
	gdouble _preview_size;
	FontManagerFontScale* fontscale;
};

struct _FontManagerAdjustablePreviewClass {
	GtkBoxClass parent_class;
	void (*set_preview_size_internal) (FontManagerAdjustablePreview* self, gdouble new_size);
	void (*init) (FontManagerAdjustablePreview* self);
};

struct _FontManagerBrowse {
	FontManagerAdjustablePreview parent_instance;
	FontManagerBrowsePrivate * priv;
};

struct _FontManagerBrowseClass {
	FontManagerAdjustablePreviewClass parent_class;
};

struct _FontManagerBrowsePrivate {
	GtkProgressBar* _progress;
	BaseTreeView* _treeview;
	gboolean _loading;
	GtkBox* main_box;
	GtkOverlay* overlay;
	GtkTreeStore* _model;
	GtkScrolledWindow* scroll;
	FontConfigReject* _reject;
	CellRendererTitle* renderer;
};

typedef enum  {
	FONT_MANAGER_FONT_MODEL_COLUMN_OBJECT,
	FONT_MANAGER_FONT_MODEL_COLUMN_DESCRIPTION,
	FONT_MANAGER_FONT_MODEL_COLUMN_COUNT,
	FONT_MANAGER_FONT_MODEL_COLUMN_N_COLUMNS
} FontManagerFontModelColumn;


static gpointer font_manager_browse_parent_class = NULL;

GType font_manager_adjustable_preview_get_type (void) G_GNUC_CONST;
GType font_manager_font_scale_get_type (void) G_GNUC_CONST;
GType font_manager_browse_get_type (void) G_GNUC_CONST;
GType base_tree_view_get_type (void) G_GNUC_CONST;
GType font_config_selections_get_type (void) G_GNUC_CONST;
GType font_config_reject_get_type (void) G_GNUC_CONST;
GType cell_renderer_pill_get_type (void) G_GNUC_CONST;
GType cell_renderer_title_get_type (void) G_GNUC_CONST;
#define FONT_MANAGER_BROWSE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FONT_MANAGER_TYPE_BROWSE, FontManagerBrowsePrivate))
enum  {
	FONT_MANAGER_BROWSE_DUMMY_PROPERTY,
	FONT_MANAGER_BROWSE_MODEL,
	FONT_MANAGER_BROWSE_REJECT,
	FONT_MANAGER_BROWSE_LOADING,
	FONT_MANAGER_BROWSE_PROGRESS,
	FONT_MANAGER_BROWSE_TREEVIEW
};
FontManagerBrowse* font_manager_browse_new (void);
FontManagerBrowse* font_manager_browse_construct (GType object_type);
FontManagerAdjustablePreview* font_manager_adjustable_preview_construct (GType object_type);
void font_manager_adjustable_preview_init (FontManagerAdjustablePreview* self);
BaseTreeView* base_tree_view_new (void);
BaseTreeView* base_tree_view_construct (GType object_type);
static void font_manager_browse_set_treeview (FontManagerBrowse* self, BaseTreeView* value);
BaseTreeView* font_manager_browse_get_treeview (FontManagerBrowse* self);
static void font_manager_browse_set_progress (FontManagerBrowse* self, GtkProgressBar* value);
GtkProgressBar* font_manager_browse_get_progress (FontManagerBrowse* self);
CellRendererTitle* cell_renderer_title_new (void);
CellRendererTitle* cell_renderer_title_construct (GType object_type);
void cell_renderer_pill_set_junction_side (CellRendererPill* self, GtkJunctionSides value);
void font_manager_font_scale_add_style_class (FontManagerFontScale* self, const gchar* gtk_style_class);
GType font_manager_font_model_column_get_type (void) G_GNUC_CONST;
static void font_manager_browse_cell_data_func (FontManagerBrowse* self, GtkTreeViewColumn* layout, GtkCellRenderer* cell, GtkTreeModel* model, GtkTreeIter* treeiter);
static void _font_manager_browse_cell_data_func_gtk_tree_cell_data_func (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, GtkTreeModel* tree_model, GtkTreeIter* iter, gpointer self);
void font_manager_browse_expand_all (FontManagerBrowse* self);
static void font_manager_browse_real_show (GtkWidget* base);
static void font_manager_browse_real_set_preview_size_internal (FontManagerAdjustablePreview* base, gdouble new_size);
GType cacheable_get_type (void) G_GNUC_CONST;
GType font_config_family_get_type (void) G_GNUC_CONST;
const gchar* font_config_family_get_description (FontConfigFamily* self);
FontConfigReject* font_manager_browse_get_reject (FontManagerBrowse* self);
const gchar* font_config_family_get_name (FontConfigFamily* self);
GType font_config_font_get_type (void) G_GNUC_CONST;
const gchar* font_config_font_get_description (FontConfigFont* self);
const gchar* font_config_font_get_family (FontConfigFont* self);
PangoFontDescription* get_font (GtkWidget* widget, GtkStateFlags flags);
gdouble font_manager_adjustable_preview_get_desc_size (FontManagerAdjustablePreview* self);
gdouble font_manager_adjustable_preview_get_preview_size (FontManagerAdjustablePreview* self);
static void _vala_PangoFontDescription_free (PangoFontDescription* self);
GtkTreeStore* font_manager_browse_get_model (FontManagerBrowse* self);
void font_manager_browse_set_model (FontManagerBrowse* self, GtkTreeStore* value);
void font_manager_browse_set_reject (FontManagerBrowse* self, FontConfigReject* value);
gboolean font_manager_browse_get_loading (FontManagerBrowse* self);
void font_manager_browse_set_loading (FontManagerBrowse* self, gboolean value);
static void font_manager_browse_finalize (GObject* obj);
static void _vala_font_manager_browse_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_font_manager_browse_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static void _font_manager_browse_cell_data_func_gtk_tree_cell_data_func (GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, GtkTreeModel* tree_model, GtkTreeIter* iter, gpointer self) {
	font_manager_browse_cell_data_func ((FontManagerBrowse*) self, tree_column, cell, tree_model, iter);
}


FontManagerBrowse* font_manager_browse_construct (GType object_type) {
	FontManagerBrowse * self = NULL;
	BaseTreeView* _tmp0_ = NULL;
	BaseTreeView* _tmp1_ = NULL;
	BaseTreeView* _tmp2_ = NULL;
	BaseTreeView* _tmp3_ = NULL;
	BaseTreeView* _tmp4_ = NULL;
	GtkProgressBar* _tmp5_ = NULL;
	GtkProgressBar* _tmp6_ = NULL;
	GtkProgressBar* _tmp7_ = NULL;
	GtkProgressBar* _tmp8_ = NULL;
	GtkOverlay* _tmp9_ = NULL;
	GtkOverlay* _tmp10_ = NULL;
	GtkProgressBar* _tmp11_ = NULL;
	GtkOverlay* _tmp12_ = NULL;
	GtkStyleContext* _tmp13_ = NULL;
	GtkBox* _tmp14_ = NULL;
	GtkOverlay* _tmp15_ = NULL;
	GtkBox* _tmp16_ = NULL;
	GtkOverlay* _tmp17_ = NULL;
	GtkScrolledWindow* _tmp18_ = NULL;
	GtkScrolledWindow* _tmp19_ = NULL;
	BaseTreeView* _tmp20_ = NULL;
	GtkScrolledWindow* _tmp21_ = NULL;
	GtkBox* _tmp22_ = NULL;
	GtkScrolledWindow* _tmp23_ = NULL;
	CellRendererTitle* _tmp24_ = NULL;
	CellRendererTitle* _tmp25_ = NULL;
	CellRendererTitle* _tmp26_ = NULL;
	FontManagerFontScale* _tmp27_ = NULL;
	GtkBox* _tmp28_ = NULL;
	FontManagerFontScale* _tmp29_ = NULL;
	BaseTreeView* _tmp30_ = NULL;
	BaseTreeView* _tmp31_ = NULL;
	BaseTreeView* _tmp32_ = NULL;
	CellRendererTitle* _tmp33_ = NULL;
	BaseTreeView* _tmp34_ = NULL;
	GtkTreeSelection* _tmp35_ = NULL;
	self = (FontManagerBrowse*) font_manager_adjustable_preview_construct (object_type);
	FONT_MANAGER_ADJUSTABLE_PREVIEW_CLASS (font_manager_browse_parent_class)->init (G_TYPE_CHECK_INSTANCE_CAST (self, FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreview));
	gtk_orientable_set_orientation ((GtkOrientable*) self, GTK_ORIENTATION_VERTICAL);
	_tmp0_ = base_tree_view_new ();
	g_object_ref_sink (_tmp0_);
	_tmp1_ = _tmp0_;
	font_manager_browse_set_treeview (self, _tmp1_);
	_g_object_unref0 (_tmp1_);
	_tmp2_ = self->priv->_treeview;
	gtk_widget_set_name ((GtkWidget*) _tmp2_, "FontManagerBrowseView");
	_tmp3_ = self->priv->_treeview;
	gtk_tree_view_set_headers_visible ((GtkTreeView*) _tmp3_, FALSE);
	_tmp4_ = self->priv->_treeview;
	gtk_tree_view_set_show_expanders ((GtkTreeView*) _tmp4_, FALSE);
	_tmp5_ = (GtkProgressBar*) gtk_progress_bar_new ();
	g_object_ref_sink (_tmp5_);
	_tmp6_ = _tmp5_;
	font_manager_browse_set_progress (self, _tmp6_);
	_g_object_unref0 (_tmp6_);
	_tmp7_ = self->priv->_progress;
	gtk_widget_set_halign ((GtkWidget*) _tmp7_, GTK_ALIGN_CENTER);
	_tmp8_ = self->priv->_progress;
	gtk_widget_set_valign ((GtkWidget*) _tmp8_, GTK_ALIGN_CENTER);
	_tmp9_ = (GtkOverlay*) gtk_overlay_new ();
	g_object_ref_sink (_tmp9_);
	_g_object_unref0 (self->priv->overlay);
	self->priv->overlay = _tmp9_;
	_tmp10_ = self->priv->overlay;
	_tmp11_ = self->priv->_progress;
	gtk_overlay_add_overlay (_tmp10_, (GtkWidget*) _tmp11_);
	_tmp12_ = self->priv->overlay;
	_tmp13_ = gtk_widget_get_style_context ((GtkWidget*) _tmp12_);
	gtk_style_context_add_class (_tmp13_, GTK_STYLE_CLASS_ENTRY);
	_tmp14_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp14_);
	_g_object_unref0 (self->priv->main_box);
	self->priv->main_box = _tmp14_;
	_tmp15_ = self->priv->overlay;
	_tmp16_ = self->priv->main_box;
	gtk_container_add ((GtkContainer*) _tmp15_, (GtkWidget*) _tmp16_);
	_tmp17_ = self->priv->overlay;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp17_);
	_tmp18_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	g_object_ref_sink (_tmp18_);
	_g_object_unref0 (self->priv->scroll);
	self->priv->scroll = _tmp18_;
	_tmp19_ = self->priv->scroll;
	_tmp20_ = self->priv->_treeview;
	gtk_container_add ((GtkContainer*) _tmp19_, (GtkWidget*) _tmp20_);
	_tmp21_ = self->priv->scroll;
	g_object_set ((GtkWidget*) _tmp21_, "expand", TRUE, NULL);
	_tmp22_ = self->priv->main_box;
	_tmp23_ = self->priv->scroll;
	gtk_box_pack_start (_tmp22_, (GtkWidget*) _tmp23_, TRUE, TRUE, (guint) 0);
	_tmp24_ = cell_renderer_title_new ();
	g_object_ref_sink (_tmp24_);
	_g_object_unref0 (self->priv->renderer);
	self->priv->renderer = _tmp24_;
	_tmp25_ = self->priv->renderer;
	g_object_set ((GtkCellRenderer*) _tmp25_, "xpad", (guint) 48, NULL);
	_tmp26_ = self->priv->renderer;
	cell_renderer_pill_set_junction_side ((CellRendererPill*) _tmp26_, GTK_JUNCTION_LEFT);
	_tmp27_ = ((FontManagerAdjustablePreview*) self)->fontscale;
	font_manager_font_scale_add_style_class (_tmp27_, GTK_STYLE_CLASS_VIEW);
	_tmp28_ = self->priv->main_box;
	_tmp29_ = ((FontManagerAdjustablePreview*) self)->fontscale;
	gtk_box_pack_end (_tmp28_, (GtkWidget*) _tmp29_, FALSE, TRUE, (guint) 0);
	_tmp30_ = self->priv->_treeview;
	gtk_tree_view_set_enable_search ((GtkTreeView*) _tmp30_, TRUE);
	_tmp31_ = self->priv->_treeview;
	gtk_tree_view_set_search_column ((GtkTreeView*) _tmp31_, (gint) FONT_MANAGER_FONT_MODEL_COLUMN_DESCRIPTION);
	_tmp32_ = self->priv->_treeview;
	_tmp33_ = self->priv->renderer;
	gtk_tree_view_insert_column_with_data_func ((GtkTreeView*) _tmp32_, 0, "", (GtkCellRenderer*) _tmp33_, _font_manager_browse_cell_data_func_gtk_tree_cell_data_func, g_object_ref (self), g_object_unref);
	_tmp34_ = self->priv->_treeview;
	_tmp35_ = gtk_tree_view_get_selection ((GtkTreeView*) _tmp34_);
	gtk_tree_selection_set_mode (_tmp35_, GTK_SELECTION_NONE);
	font_manager_browse_expand_all (self);
	return self;
}


FontManagerBrowse* font_manager_browse_new (void) {
	return font_manager_browse_construct (FONT_MANAGER_TYPE_BROWSE);
}


static void font_manager_browse_real_show (GtkWidget* base) {
	FontManagerBrowse * self;
	BaseTreeView* _tmp0_ = NULL;
	FontManagerFontScale* _tmp1_ = NULL;
	BaseTreeView* _tmp2_ = NULL;
	GtkScrolledWindow* _tmp3_ = NULL;
	GtkBox* _tmp4_ = NULL;
	GtkOverlay* _tmp5_ = NULL;
	self = (FontManagerBrowse*) base;
	_tmp0_ = self->priv->_treeview;
	gtk_widget_show ((GtkWidget*) _tmp0_);
	_tmp1_ = ((FontManagerAdjustablePreview*) self)->fontscale;
	gtk_widget_show ((GtkWidget*) _tmp1_);
	_tmp2_ = self->priv->_treeview;
	gtk_widget_show ((GtkWidget*) _tmp2_);
	_tmp3_ = self->priv->scroll;
	gtk_widget_show ((GtkWidget*) _tmp3_);
	_tmp4_ = self->priv->main_box;
	gtk_widget_show ((GtkWidget*) _tmp4_);
	_tmp5_ = self->priv->overlay;
	gtk_widget_show ((GtkWidget*) _tmp5_);
	GTK_WIDGET_CLASS (font_manager_browse_parent_class)->show ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, FontManagerAdjustablePreview));
	return;
}


void font_manager_browse_expand_all (FontManagerBrowse* self) {
	BaseTreeView* _tmp0_ = NULL;
	BaseTreeView* _tmp1_ = NULL;
	GtkTreeViewColumn* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_treeview;
	gtk_tree_view_expand_all ((GtkTreeView*) _tmp0_);
	_tmp1_ = self->priv->_treeview;
	_tmp2_ = gtk_tree_view_get_column ((GtkTreeView*) _tmp1_, 0);
	gtk_tree_view_column_queue_resize (_tmp2_);
	return;
}


static void font_manager_browse_real_set_preview_size_internal (FontManagerAdjustablePreview* base, gdouble new_size) {
	FontManagerBrowse * self;
	BaseTreeView* _tmp0_ = NULL;
	GtkTreeViewColumn* _tmp1_ = NULL;
	self = (FontManagerBrowse*) base;
	_tmp0_ = self->priv->_treeview;
	_tmp1_ = gtk_tree_view_get_column ((GtkTreeView*) _tmp0_, 0);
	gtk_tree_view_column_queue_resize (_tmp1_);
	return;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _vala_PangoFontDescription_free (PangoFontDescription* self) {
	g_boxed_free (pango_font_description_get_type (), self);
}


static void font_manager_browse_cell_data_func (FontManagerBrowse* self, GtkTreeViewColumn* layout, GtkCellRenderer* cell, GtkTreeModel* model, GtkTreeIter* treeiter) {
	GValue val = {0};
	GtkTreeModel* _tmp0_ = NULL;
	GtkTreeIter _tmp1_ = {0};
	GValue _tmp2_ = {0};
	GObject* obj = NULL;
	GObject* _tmp3_ = NULL;
	GObject* _tmp4_ = NULL;
	gchar* font_desc = NULL;
	gboolean active = FALSE;
	GObject* _tmp5_ = NULL;
	GtkCellRenderer* _tmp26_ = NULL;
	const gchar* _tmp27_ = NULL;
	GValue _tmp28_ = {0};
	PangoFontDescription* default_desc = NULL;
	BaseTreeView* _tmp29_ = NULL;
	PangoFontDescription* _tmp30_ = NULL;
	PangoFontDescription* _tmp31_ = NULL;
	gdouble _tmp32_ = 0.0;
	GtkCellRenderer* _tmp33_ = NULL;
	PangoFontDescription* _tmp34_ = NULL;
	GValue _tmp35_ = {0};
	GtkCellRenderer* _tmp36_ = NULL;
	gboolean _tmp37_ = FALSE;
	GValue _tmp38_ = {0};
	GtkCellRenderer* _tmp39_ = NULL;
	gboolean _tmp40_ = FALSE;
	GValue _tmp41_ = {0};
	GtkTreeModel* _tmp42_ = NULL;
	GtkTreeIter _tmp43_ = {0};
	gboolean _tmp44_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (layout != NULL);
	g_return_if_fail (cell != NULL);
	g_return_if_fail (model != NULL);
	g_return_if_fail (treeiter != NULL);
	_tmp0_ = model;
	_tmp1_ = *treeiter;
	gtk_tree_model_get_value (_tmp0_, &_tmp1_, (gint) FONT_MANAGER_FONT_MODEL_COLUMN_OBJECT, &_tmp2_);
	G_IS_VALUE (&val) ? (g_value_unset (&val), NULL) : NULL;
	val = _tmp2_;
	_tmp3_ = g_value_get_object (&val);
	_tmp4_ = _g_object_ref0 (_tmp3_);
	obj = _tmp4_;
	_tmp5_ = obj;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, FONT_CONFIG_TYPE_FAMILY)) {
		GObject* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		FontConfigReject* _tmp10_ = NULL;
		FontConfigReject* _tmp11_ = NULL;
		GObject* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		const gchar* _tmp14_ = NULL;
		gboolean _tmp15_ = FALSE;
		_tmp6_ = obj;
		_tmp7_ = font_config_family_get_description (G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, FONT_CONFIG_TYPE_FAMILY, FontConfigFamily));
		_tmp8_ = _tmp7_;
		_tmp9_ = g_strdup (_tmp8_);
		_g_free0 (font_desc);
		font_desc = _tmp9_;
		_tmp10_ = font_manager_browse_get_reject (self);
		_tmp11_ = _tmp10_;
		_tmp12_ = obj;
		_tmp13_ = font_config_family_get_name (G_TYPE_CHECK_INSTANCE_CAST (_tmp12_, FONT_CONFIG_TYPE_FAMILY, FontConfigFamily));
		_tmp14_ = _tmp13_;
		_tmp15_ = gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp11_, _tmp14_);
		active = !_tmp15_;
	} else {
		GObject* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
		const gchar* _tmp18_ = NULL;
		gchar* _tmp19_ = NULL;
		FontConfigReject* _tmp20_ = NULL;
		FontConfigReject* _tmp21_ = NULL;
		GObject* _tmp22_ = NULL;
		const gchar* _tmp23_ = NULL;
		const gchar* _tmp24_ = NULL;
		gboolean _tmp25_ = FALSE;
		_tmp16_ = obj;
		_tmp17_ = font_config_font_get_description (G_TYPE_CHECK_INSTANCE_CAST (_tmp16_, FONT_CONFIG_TYPE_FONT, FontConfigFont));
		_tmp18_ = _tmp17_;
		_tmp19_ = g_strdup (_tmp18_);
		_g_free0 (font_desc);
		font_desc = _tmp19_;
		_tmp20_ = font_manager_browse_get_reject (self);
		_tmp21_ = _tmp20_;
		_tmp22_ = obj;
		_tmp23_ = font_config_font_get_family (G_TYPE_CHECK_INSTANCE_CAST (_tmp22_, FONT_CONFIG_TYPE_FONT, FontConfigFont));
		_tmp24_ = _tmp23_;
		_tmp25_ = gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp21_, _tmp24_);
		active = !_tmp25_;
	}
	_tmp26_ = cell;
	_tmp27_ = font_desc;
	g_value_init (&_tmp28_, G_TYPE_STRING);
	g_value_set_string (&_tmp28_, _tmp27_);
	g_object_set_property ((GObject*) _tmp26_, "text", &_tmp28_);
	G_IS_VALUE (&_tmp28_) ? (g_value_unset (&_tmp28_), NULL) : NULL;
	_tmp29_ = self->priv->_treeview;
	_tmp30_ = get_font ((GtkWidget*) _tmp29_, GTK_STATE_FLAG_NORMAL);
	default_desc = _tmp30_;
	_tmp31_ = default_desc;
	_tmp32_ = font_manager_adjustable_preview_get_desc_size ((FontManagerAdjustablePreview*) self);
	pango_font_description_set_size (_tmp31_, (gint) (_tmp32_ * PANGO_SCALE));
	_tmp33_ = cell;
	_tmp34_ = default_desc;
	g_value_init (&_tmp35_, pango_font_description_get_type ());
	g_value_set_boxed (&_tmp35_, _tmp34_);
	g_object_set_property ((GObject*) _tmp33_, "font-desc", &_tmp35_);
	G_IS_VALUE (&_tmp35_) ? (g_value_unset (&_tmp35_), NULL) : NULL;
	_tmp36_ = cell;
	_tmp37_ = active;
	g_value_init (&_tmp38_, G_TYPE_BOOLEAN);
	g_value_set_boolean (&_tmp38_, _tmp37_);
	g_object_set_property ((GObject*) _tmp36_, "sensitive", &_tmp38_);
	G_IS_VALUE (&_tmp38_) ? (g_value_unset (&_tmp38_), NULL) : NULL;
	_tmp39_ = cell;
	_tmp40_ = active;
	g_value_init (&_tmp41_, G_TYPE_BOOLEAN);
	g_value_set_boolean (&_tmp41_, !_tmp40_);
	g_object_set_property ((GObject*) _tmp39_, "strikethrough", &_tmp41_);
	G_IS_VALUE (&_tmp41_) ? (g_value_unset (&_tmp41_), NULL) : NULL;
	_tmp42_ = model;
	_tmp43_ = *treeiter;
	_tmp44_ = gtk_tree_model_iter_has_child (_tmp42_, &_tmp43_);
	if (_tmp44_) {
		GtkCellRenderer* _tmp45_ = NULL;
		const gchar* _tmp46_ = NULL;
		GValue _tmp47_ = {0};
		GtkCellRenderer* _tmp48_ = NULL;
		GValue _tmp49_ = {0};
		_tmp45_ = cell;
		_tmp46_ = font_desc;
		g_value_init (&_tmp47_, G_TYPE_STRING);
		g_value_set_string (&_tmp47_, _tmp46_);
		g_object_set_property ((GObject*) _tmp45_, "title", &_tmp47_);
		G_IS_VALUE (&_tmp47_) ? (g_value_unset (&_tmp47_), NULL) : NULL;
		_tmp48_ = cell;
		g_value_init (&_tmp49_, G_TYPE_BOOLEAN);
		g_value_set_boolean (&_tmp49_, FALSE);
		g_object_set_property ((GObject*) _tmp48_, "fallthrough", &_tmp49_);
		G_IS_VALUE (&_tmp49_) ? (g_value_unset (&_tmp49_), NULL) : NULL;
	} else {
		PangoFontDescription* desc = NULL;
		const gchar* _tmp50_ = NULL;
		PangoFontDescription* _tmp51_ = NULL;
		PangoFontDescription* _tmp52_ = NULL;
		gdouble _tmp53_ = 0.0;
		gdouble _tmp54_ = 0.0;
		GtkCellRenderer* _tmp55_ = NULL;
		PangoFontDescription* _tmp56_ = NULL;
		GValue _tmp57_ = {0};
		GtkCellRenderer* _tmp58_ = NULL;
		GValue _tmp59_ = {0};
		GtkCellRenderer* _tmp60_ = NULL;
		GValue _tmp61_ = {0};
		_tmp50_ = font_desc;
		_tmp51_ = pango_font_description_from_string (_tmp50_);
		desc = _tmp51_;
		_tmp52_ = desc;
		_tmp53_ = font_manager_adjustable_preview_get_preview_size ((FontManagerAdjustablePreview*) self);
		_tmp54_ = _tmp53_;
		pango_font_description_set_size (_tmp52_, (gint) (_tmp54_ * PANGO_SCALE));
		_tmp55_ = cell;
		_tmp56_ = desc;
		g_value_init (&_tmp57_, pango_font_description_get_type ());
		g_value_set_boxed (&_tmp57_, _tmp56_);
		g_object_set_property ((GObject*) _tmp55_, "font-desc", &_tmp57_);
		G_IS_VALUE (&_tmp57_) ? (g_value_unset (&_tmp57_), NULL) : NULL;
		_tmp58_ = cell;
		g_value_init (&_tmp59_, G_TYPE_INT);
		g_value_set_int (&_tmp59_, 5);
		g_object_set_property ((GObject*) _tmp58_, "ypad", &_tmp59_);
		G_IS_VALUE (&_tmp59_) ? (g_value_unset (&_tmp59_), NULL) : NULL;
		_tmp60_ = cell;
		g_value_init (&_tmp61_, G_TYPE_BOOLEAN);
		g_value_set_boolean (&_tmp61_, TRUE);
		g_object_set_property ((GObject*) _tmp60_, "fallthrough", &_tmp61_);
		G_IS_VALUE (&_tmp61_) ? (g_value_unset (&_tmp61_), NULL) : NULL;
		__vala_PangoFontDescription_free0 (desc);
	}
	g_value_unset (&val);
	__vala_PangoFontDescription_free0 (default_desc);
	_g_free0 (font_desc);
	_g_object_unref0 (obj);
	G_IS_VALUE (&val) ? (g_value_unset (&val), NULL) : NULL;
	return;
}


GtkTreeStore* font_manager_browse_get_model (FontManagerBrowse* self) {
	GtkTreeStore* result;
	GtkTreeStore* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_model;
	result = _tmp0_;
	return result;
}


void font_manager_browse_set_model (FontManagerBrowse* self, GtkTreeStore* value) {
	GtkTreeStore* _tmp0_ = NULL;
	GtkTreeStore* _tmp1_ = NULL;
	BaseTreeView* _tmp2_ = NULL;
	GtkTreeStore* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_model);
	self->priv->_model = _tmp1_;
	_tmp2_ = self->priv->_treeview;
	_tmp3_ = self->priv->_model;
	gtk_tree_view_set_model ((GtkTreeView*) _tmp2_, (GtkTreeModel*) _tmp3_);
	g_object_notify ((GObject *) self, "model");
}


FontConfigReject* font_manager_browse_get_reject (FontManagerBrowse* self) {
	FontConfigReject* result;
	FontConfigReject* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_reject;
	result = _tmp0_;
	return result;
}


void font_manager_browse_set_reject (FontManagerBrowse* self, FontConfigReject* value) {
	FontConfigReject* _tmp0_ = NULL;
	FontConfigReject* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_reject);
	self->priv->_reject = _tmp1_;
	g_object_notify ((GObject *) self, "reject");
}


gboolean font_manager_browse_get_loading (FontManagerBrowse* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_loading;
	result = _tmp0_;
	return result;
}


void font_manager_browse_set_loading (FontManagerBrowse* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_loading = _tmp0_;
	_tmp1_ = self->priv->_loading;
	if (_tmp1_) {
		GtkProgressBar* _tmp2_ = NULL;
		_tmp2_ = self->priv->_progress;
		gtk_widget_show ((GtkWidget*) _tmp2_);
	} else {
		GtkProgressBar* _tmp3_ = NULL;
		_tmp3_ = self->priv->_progress;
		gtk_widget_hide ((GtkWidget*) _tmp3_);
	}
	g_object_notify ((GObject *) self, "loading");
}


GtkProgressBar* font_manager_browse_get_progress (FontManagerBrowse* self) {
	GtkProgressBar* result;
	GtkProgressBar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_progress;
	result = _tmp0_;
	return result;
}


static void font_manager_browse_set_progress (FontManagerBrowse* self, GtkProgressBar* value) {
	GtkProgressBar* _tmp0_ = NULL;
	GtkProgressBar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_progress);
	self->priv->_progress = _tmp1_;
	g_object_notify ((GObject *) self, "progress");
}


BaseTreeView* font_manager_browse_get_treeview (FontManagerBrowse* self) {
	BaseTreeView* result;
	BaseTreeView* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_treeview;
	result = _tmp0_;
	return result;
}


static void font_manager_browse_set_treeview (FontManagerBrowse* self, BaseTreeView* value) {
	BaseTreeView* _tmp0_ = NULL;
	BaseTreeView* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_treeview);
	self->priv->_treeview = _tmp1_;
	g_object_notify ((GObject *) self, "treeview");
}


static void font_manager_browse_class_init (FontManagerBrowseClass * klass) {
	font_manager_browse_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FontManagerBrowsePrivate));
	((GtkWidgetClass *) klass)->show = font_manager_browse_real_show;
	((FontManagerAdjustablePreviewClass *) klass)->set_preview_size_internal = font_manager_browse_real_set_preview_size_internal;
	G_OBJECT_CLASS (klass)->get_property = _vala_font_manager_browse_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_font_manager_browse_set_property;
	G_OBJECT_CLASS (klass)->finalize = font_manager_browse_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_BROWSE_MODEL, g_param_spec_object ("model", "model", "model", gtk_tree_store_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_BROWSE_REJECT, g_param_spec_object ("reject", "reject", "reject", FONT_CONFIG_TYPE_REJECT, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_BROWSE_LOADING, g_param_spec_boolean ("loading", "loading", "loading", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_BROWSE_PROGRESS, g_param_spec_object ("progress", "progress", "progress", gtk_progress_bar_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), FONT_MANAGER_BROWSE_TREEVIEW, g_param_spec_object ("treeview", "treeview", "treeview", TYPE_BASE_TREE_VIEW, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void font_manager_browse_instance_init (FontManagerBrowse * self) {
	self->priv = FONT_MANAGER_BROWSE_GET_PRIVATE (self);
	self->priv->_loading = FALSE;
}


static void font_manager_browse_finalize (GObject* obj) {
	FontManagerBrowse * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FONT_MANAGER_TYPE_BROWSE, FontManagerBrowse);
	_g_object_unref0 (self->priv->_progress);
	_g_object_unref0 (self->priv->_treeview);
	_g_object_unref0 (self->priv->main_box);
	_g_object_unref0 (self->priv->overlay);
	_g_object_unref0 (self->priv->_model);
	_g_object_unref0 (self->priv->scroll);
	_g_object_unref0 (self->priv->_reject);
	_g_object_unref0 (self->priv->renderer);
	G_OBJECT_CLASS (font_manager_browse_parent_class)->finalize (obj);
}


GType font_manager_browse_get_type (void) {
	static volatile gsize font_manager_browse_type_id__volatile = 0;
	if (g_once_init_enter (&font_manager_browse_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FontManagerBrowseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) font_manager_browse_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FontManagerBrowse), 0, (GInstanceInitFunc) font_manager_browse_instance_init, NULL };
		GType font_manager_browse_type_id;
		font_manager_browse_type_id = g_type_register_static (FONT_MANAGER_TYPE_ADJUSTABLE_PREVIEW, "FontManagerBrowse", &g_define_type_info, 0);
		g_once_init_leave (&font_manager_browse_type_id__volatile, font_manager_browse_type_id);
	}
	return font_manager_browse_type_id__volatile;
}


static void _vala_font_manager_browse_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FontManagerBrowse * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_BROWSE, FontManagerBrowse);
	switch (property_id) {
		case FONT_MANAGER_BROWSE_MODEL:
		g_value_set_object (value, font_manager_browse_get_model (self));
		break;
		case FONT_MANAGER_BROWSE_REJECT:
		g_value_set_object (value, font_manager_browse_get_reject (self));
		break;
		case FONT_MANAGER_BROWSE_LOADING:
		g_value_set_boolean (value, font_manager_browse_get_loading (self));
		break;
		case FONT_MANAGER_BROWSE_PROGRESS:
		g_value_set_object (value, font_manager_browse_get_progress (self));
		break;
		case FONT_MANAGER_BROWSE_TREEVIEW:
		g_value_set_object (value, font_manager_browse_get_treeview (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_font_manager_browse_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FontManagerBrowse * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FONT_MANAGER_TYPE_BROWSE, FontManagerBrowse);
	switch (property_id) {
		case FONT_MANAGER_BROWSE_MODEL:
		font_manager_browse_set_model (self, g_value_get_object (value));
		break;
		case FONT_MANAGER_BROWSE_REJECT:
		font_manager_browse_set_reject (self, g_value_get_object (value));
		break;
		case FONT_MANAGER_BROWSE_LOADING:
		font_manager_browse_set_loading (self, g_value_get_boolean (value));
		break;
		case FONT_MANAGER_BROWSE_PROGRESS:
		font_manager_browse_set_progress (self, g_value_get_object (value));
		break;
		case FONT_MANAGER_BROWSE_TREEVIEW:
		font_manager_browse_set_treeview (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


