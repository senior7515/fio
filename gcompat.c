#include <gtk/gtk.h>

#include "gcompat.h"

#if GTK_MAJOR_VERSION <= 2 && GTK_MINOR_VERSION < 24

GtkWidget *gtk_combo_box_text_new(void)
{
	return gtk_combo_box_new();
}

void gtk_combo_box_text_append_text(GtkComboBoxText *combo_box,
				    const gchar *text)
{
	gtk_combo_box_append_text(GTK_COMBO_BOX(combo_box), text);
}

void gtk_combo_box_text_insert_text(GtkComboBoxText *combo_box, gint position,
				    const gchar *text)
{
	gtk_combo_box_insert_text(GTK_COMBO_BOX(combo_box), position, text);
}

void gtk_combo_box_text_prepend_text(GtkComboBoxText *combo_box,
				     const gchar *text)
{
	gtk_combo_box_prepend_text(GTK_COMBO_BOX(combo_box), text);
}

gchar *gtk_combo_box_text_get_active_text(GtkComboBoxText *combo_box)
{
	return gtk_combo_box_get_active_text(GTK_COMBO_BOX(combo_box));
}

#endif