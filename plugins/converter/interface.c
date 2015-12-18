/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    g_object_ref(G_OBJECT(widget)), (GDestroyNotify) g_object_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_converterdlg (void)
{
  GtkWidget *converterdlg;
  GtkWidget *dialog_vbox6;
  GtkWidget *vbox26;
  GtkWidget *hbox67;
  GtkWidget *label103;
  GtkWidget *hbox68;
  GtkWidget *output_folder;
  GtkWidget *converter_output_browse;
  GtkWidget *write_to_source_folder;
  GtkWidget *preserve_folders;
  GtkWidget *hbox100;
  GtkWidget *label122;
  GtkWidget *hbox101;
  GtkWidget *output_file;
  GtkWidget *custom6;
  GtkWidget *hbox69;
  GtkWidget *label104;
  GtkWidget *hbox90;
  GtkWidget *encoder;
  GtkWidget *edit_encoder_presets;
  GtkWidget *image469;
  GtkWidget *hbox86;
  GtkWidget *label114;
  GtkWidget *hbox91;
  GtkWidget *dsp_preset;
  GtkWidget *edit_dsp_presets;
  GtkWidget *image470;
  GtkWidget *hbox88;
  GtkWidget *label116;
  GObject *numthreads_adj;
  GtkWidget *numthreads;
  GtkWidget *hbox89;
  GtkWidget *label117;
  GtkWidget *output_format;
  GtkWidget *hbox99;
  GtkWidget *label121;
  GtkWidget *overwrite_action;
  GtkWidget *dialog_action_area5;
  GtkWidget *converter_cancel;
  GtkWidget *converter_ok;

  converterdlg = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (converterdlg), "Converter");
  gtk_window_set_position (GTK_WINDOW (converterdlg), GTK_WIN_POS_MOUSE);
  gtk_window_set_modal (GTK_WINDOW (converterdlg), TRUE);
  gtk_window_set_destroy_with_parent (GTK_WINDOW (converterdlg), TRUE);
  gtk_window_set_type_hint (GTK_WINDOW (converterdlg), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (converterdlg), FALSE);

  dialog_vbox6 = gtk_dialog_get_content_area (GTK_DIALOG (converterdlg));
  gtk_widget_show (dialog_vbox6);

  vbox26 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox26);
  gtk_box_pack_start (GTK_BOX (dialog_vbox6), vbox26, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox26), 12);

  hbox67 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox67);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox67, FALSE, TRUE, 0);

  label103 = gtk_label_new (_("Output folder:"));
  gtk_widget_show (label103);
  gtk_box_pack_start (GTK_BOX (hbox67), label103, FALSE, FALSE, 0);

  hbox68 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox68);
  gtk_box_pack_start (GTK_BOX (hbox67), hbox68, TRUE, TRUE, 0);

  output_folder = gtk_entry_new ();
  gtk_widget_show (output_folder);
  gtk_box_pack_start (GTK_BOX (hbox68), output_folder, TRUE, TRUE, 0);
  gtk_entry_set_invisible_char (GTK_ENTRY (output_folder), 9679);

  converter_output_browse = gtk_button_new_with_mnemonic ("...");
  gtk_widget_show (converter_output_browse);
  gtk_box_pack_start (GTK_BOX (hbox68), converter_output_browse, FALSE, FALSE, 0);

  write_to_source_folder = gtk_check_button_new_with_mnemonic (_("Write to source track folder"));
  gtk_widget_show (write_to_source_folder);
  gtk_box_pack_start (GTK_BOX (vbox26), write_to_source_folder, FALSE, FALSE, 0);

  preserve_folders = gtk_check_button_new_with_mnemonic (_("Preserve folder structure"));
  gtk_widget_show (preserve_folders);
  gtk_box_pack_start (GTK_BOX (vbox26), preserve_folders, FALSE, FALSE, 0);

  hbox100 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox100);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox100, TRUE, TRUE, 0);

  label122 = gtk_label_new (_("Output file name:"));
  gtk_widget_show (label122);
  gtk_box_pack_start (GTK_BOX (hbox100), label122, FALSE, FALSE, 0);

  hbox101 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox101);
  gtk_box_pack_start (GTK_BOX (hbox100), hbox101, TRUE, TRUE, 0);

  output_file = gtk_entry_new ();
  gtk_widget_show (output_file);
  gtk_box_pack_start (GTK_BOX (hbox101), output_file, TRUE, TRUE, 0);
  gtk_widget_set_tooltip_text (output_file, _("Extension (e.g. .mp3) will be appended automatically.\nLeave the field empty for default (%album artist% - %title%)."));
  gtk_entry_set_invisible_char (GTK_ENTRY (output_file), 8226);

  custom6 = title_formatting_help_link_create ("custom6", "", "", 0, 0);
  gtk_widget_show (custom6);
  gtk_box_pack_start (GTK_BOX (hbox101), custom6, TRUE, TRUE, 0);
  gtk_widget_set_can_focus(custom6, FALSE);
  gtk_widget_set_can_default(custom6, FALSE);

  hbox69 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox69);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox69, FALSE, FALSE, 0);

  label104 = gtk_label_new (_("Encoder:"));
  gtk_widget_show (label104);
  gtk_box_pack_start (GTK_BOX (hbox69), label104, FALSE, FALSE, 0);

  hbox90 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox90);
  gtk_box_pack_start (GTK_BOX (hbox69), hbox90, TRUE, TRUE, 0);

  encoder = gtk_combo_box_text_new ();
  gtk_widget_show (encoder);
  gtk_box_pack_start (GTK_BOX (hbox90), encoder, TRUE, TRUE, 0);

  edit_encoder_presets = gtk_button_new ();
  gtk_widget_show (edit_encoder_presets);
  gtk_box_pack_start (GTK_BOX (hbox90), edit_encoder_presets, FALSE, FALSE, 0);

  image469 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image469);
  gtk_container_add (GTK_CONTAINER (edit_encoder_presets), image469);

  hbox86 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox86);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox86, FALSE, TRUE, 0);

  label114 = gtk_label_new (_("DSP preset:"));
  gtk_widget_show (label114);
  gtk_box_pack_start (GTK_BOX (hbox86), label114, FALSE, FALSE, 0);

  hbox91 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox91);
  gtk_box_pack_start (GTK_BOX (hbox86), hbox91, TRUE, TRUE, 0);

  dsp_preset = gtk_combo_box_text_new ();
  gtk_widget_show (dsp_preset);
  gtk_box_pack_start (GTK_BOX (hbox91), dsp_preset, TRUE, TRUE, 0);

  edit_dsp_presets = gtk_button_new ();
  gtk_widget_show (edit_dsp_presets);
  gtk_box_pack_start (GTK_BOX (hbox91), edit_dsp_presets, FALSE, FALSE, 0);

  image470 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image470);
  gtk_container_add (GTK_CONTAINER (edit_dsp_presets), image470);

  hbox88 = gtk_hbox_new (FALSE, 8);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox88, FALSE, TRUE, 0);

  label116 = gtk_label_new (_("Number of threads:"));
  gtk_widget_show (label116);
  gtk_box_pack_start (GTK_BOX (hbox88), label116, FALSE, FALSE, 0);

  numthreads_adj = G_OBJECT(gtk_adjustment_new (1, 0, 100, 1, 10, 0));
  numthreads = gtk_spin_button_new (GTK_ADJUSTMENT (numthreads_adj), 1, 0);
  gtk_widget_show (numthreads);
  gtk_box_pack_start (GTK_BOX (hbox88), numthreads, TRUE, TRUE, 0);

  hbox89 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox89);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox89, FALSE, TRUE, 0);

  label117 = gtk_label_new (_("Output sample format:"));
  gtk_widget_show (label117);
  gtk_box_pack_start (GTK_BOX (hbox89), label117, FALSE, FALSE, 0);

  output_format = gtk_combo_box_text_new ();
  gtk_widget_show (output_format);
  gtk_box_pack_start (GTK_BOX (hbox89), output_format, TRUE, TRUE, 0);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (output_format), _("Keep source format"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (output_format), _("8 bit signed int"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (output_format), _("16 bit signed int"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (output_format), _("24 bit signed int"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (output_format), _("32 bit signed int"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (output_format), _("32 bit float"));

  hbox99 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox99);
  gtk_box_pack_start (GTK_BOX (vbox26), hbox99, TRUE, TRUE, 0);

  label121 = gtk_label_new (_("When file exists:"));
  gtk_widget_show (label121);
  gtk_box_pack_start (GTK_BOX (hbox99), label121, FALSE, FALSE, 0);

  overwrite_action = gtk_combo_box_text_new ();
  gtk_widget_show (overwrite_action);
  gtk_box_pack_start (GTK_BOX (hbox99), overwrite_action, TRUE, TRUE, 0);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (overwrite_action), _("Skip"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (overwrite_action), _("Prompt"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (overwrite_action), _("Overwrite"));

  dialog_action_area5 = gtk_dialog_get_action_area (GTK_DIALOG (converterdlg));
  gtk_widget_show (dialog_action_area5);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area5), GTK_BUTTONBOX_END);

  converter_cancel = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (converter_cancel);
  gtk_dialog_add_action_widget (GTK_DIALOG (converterdlg), converter_cancel, GTK_RESPONSE_CANCEL);
  gtk_widget_set_can_default(converter_cancel, TRUE);

  converter_ok = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (converter_ok);
  gtk_dialog_add_action_widget (GTK_DIALOG (converterdlg), converter_ok, GTK_RESPONSE_OK);
  gtk_widget_set_can_default(converter_ok, TRUE);

  g_signal_connect ((gpointer) output_folder, "changed",
                    G_CALLBACK (on_output_folder_changed),
                    NULL);
  g_signal_connect ((gpointer) converter_output_browse, "clicked",
                    G_CALLBACK (on_converter_output_browse_clicked),
                    NULL);
  g_signal_connect ((gpointer) preserve_folders, "toggled",
                    G_CALLBACK (on_preserve_folders_toggled),
                    NULL);
  g_signal_connect ((gpointer) output_file, "changed",
                    G_CALLBACK (on_output_file_changed),
                    NULL);
  g_signal_connect ((gpointer) encoder, "changed",
                    G_CALLBACK (on_converter_encoder_changed),
                    NULL);
  g_signal_connect ((gpointer) edit_encoder_presets, "clicked",
                    G_CALLBACK (on_edit_encoder_presets_clicked),
                    NULL);
  g_signal_connect ((gpointer) dsp_preset, "changed",
                    G_CALLBACK (on_converter_dsp_preset_changed),
                    NULL);
  g_signal_connect ((gpointer) edit_dsp_presets, "clicked",
                    G_CALLBACK (on_edit_dsp_presets_clicked),
                    NULL);
  g_signal_connect ((gpointer) numthreads, "changed",
                    G_CALLBACK (on_numthreads_changed),
                    NULL);
  g_signal_connect ((gpointer) output_format, "changed",
                    G_CALLBACK (on_converter_output_format_changed),
                    NULL);
  g_signal_connect ((gpointer) overwrite_action, "changed",
                    G_CALLBACK (on_overwrite_action_changed),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (converterdlg, converterdlg, "converterdlg");
  GLADE_HOOKUP_OBJECT_NO_REF (converterdlg, dialog_vbox6, "dialog_vbox6");
  GLADE_HOOKUP_OBJECT (converterdlg, vbox26, "vbox26");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox67, "hbox67");
  GLADE_HOOKUP_OBJECT (converterdlg, label103, "label103");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox68, "hbox68");
  GLADE_HOOKUP_OBJECT (converterdlg, output_folder, "output_folder");
  GLADE_HOOKUP_OBJECT (converterdlg, converter_output_browse, "converter_output_browse");
  GLADE_HOOKUP_OBJECT (converterdlg, write_to_source_folder, "write_to_source_folder");
  GLADE_HOOKUP_OBJECT (converterdlg, preserve_folders, "preserve_folders");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox100, "hbox100");
  GLADE_HOOKUP_OBJECT (converterdlg, label122, "label122");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox101, "hbox101");
  GLADE_HOOKUP_OBJECT (converterdlg, output_file, "output_file");
  GLADE_HOOKUP_OBJECT (converterdlg, custom6, "custom6");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox69, "hbox69");
  GLADE_HOOKUP_OBJECT (converterdlg, label104, "label104");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox90, "hbox90");
  GLADE_HOOKUP_OBJECT (converterdlg, encoder, "encoder");
  GLADE_HOOKUP_OBJECT (converterdlg, edit_encoder_presets, "edit_encoder_presets");
  GLADE_HOOKUP_OBJECT (converterdlg, image469, "image469");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox86, "hbox86");
  GLADE_HOOKUP_OBJECT (converterdlg, label114, "label114");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox91, "hbox91");
  GLADE_HOOKUP_OBJECT (converterdlg, dsp_preset, "dsp_preset");
  GLADE_HOOKUP_OBJECT (converterdlg, edit_dsp_presets, "edit_dsp_presets");
  GLADE_HOOKUP_OBJECT (converterdlg, image470, "image470");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox88, "hbox88");
  GLADE_HOOKUP_OBJECT (converterdlg, label116, "label116");
  GLADE_HOOKUP_OBJECT (converterdlg, numthreads, "numthreads");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox89, "hbox89");
  GLADE_HOOKUP_OBJECT (converterdlg, label117, "label117");
  GLADE_HOOKUP_OBJECT (converterdlg, output_format, "output_format");
  GLADE_HOOKUP_OBJECT (converterdlg, hbox99, "hbox99");
  GLADE_HOOKUP_OBJECT (converterdlg, label121, "label121");
  GLADE_HOOKUP_OBJECT (converterdlg, overwrite_action, "overwrite_action");
  GLADE_HOOKUP_OBJECT_NO_REF (converterdlg, dialog_action_area5, "dialog_action_area5");
  GLADE_HOOKUP_OBJECT (converterdlg, converter_cancel, "converter_cancel");
  GLADE_HOOKUP_OBJECT (converterdlg, converter_ok, "converter_ok");

  return converterdlg;
}

GtkWidget*
create_convpreset_editor (void)
{
  GtkWidget *convpreset_editor;
  GtkWidget *dialog_vbox7;
  GtkWidget *vbox27;
  GtkWidget *hbox70;
  GtkWidget *label105;
  GtkWidget *title;
  GtkWidget *hbox96;
  GtkWidget *label120;
  GtkWidget *ext;
  GtkWidget *hbox72;
  GtkWidget *label106;
  GtkWidget *hbox93;
  GtkWidget *encoder;
  GtkWidget *custom4;
  GtkWidget *label124;
  GtkWidget *hbox73;
  GtkWidget *label107;
  GtkWidget *method;
  GtkWidget *frame9;
  GtkWidget *alignment21;
  GtkWidget *table2;
  GtkWidget *apev2;
  GtkWidget *id3v1;
  GtkWidget *oggvorbis;
  GtkWidget *flac;
  GtkWidget *hbox104;
  GtkWidget *id3v2;
  GtkWidget *id3v2_version;
  GtkWidget *label125;
  GtkWidget *dialog_action_area6;
  GtkWidget *convpreset_cancel;
  GtkWidget *convpreset_ok;

  convpreset_editor = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (convpreset_editor), _("Edit Encoder Preset"));
  gtk_window_set_modal (GTK_WINDOW (convpreset_editor), TRUE);
  gtk_window_set_type_hint (GTK_WINDOW (convpreset_editor), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox7 = gtk_dialog_get_content_area (GTK_DIALOG (convpreset_editor));
  gtk_widget_show (dialog_vbox7);

  vbox27 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox27);
  gtk_box_pack_start (GTK_BOX (dialog_vbox7), vbox27, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox27), 12);

  hbox70 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox70);
  gtk_box_pack_start (GTK_BOX (vbox27), hbox70, FALSE, TRUE, 0);

  label105 = gtk_label_new (_("Title:"));
  gtk_widget_show (label105);
  gtk_box_pack_start (GTK_BOX (hbox70), label105, FALSE, FALSE, 0);

  title = gtk_entry_new ();
  gtk_widget_show (title);
  gtk_box_pack_start (GTK_BOX (hbox70), title, TRUE, TRUE, 0);
  gtk_entry_set_text (GTK_ENTRY (title), _("Untitled Encoder"));
  gtk_entry_set_invisible_char (GTK_ENTRY (title), 9679);
  gtk_entry_set_activates_default (GTK_ENTRY (title), TRUE);

  hbox96 = gtk_hbox_new (FALSE, 9);
  gtk_widget_show (hbox96);
  gtk_box_pack_start (GTK_BOX (vbox27), hbox96, FALSE, TRUE, 0);

  label120 = gtk_label_new (_("Output file extension:"));
  gtk_widget_show (label120);
  gtk_box_pack_start (GTK_BOX (hbox96), label120, FALSE, FALSE, 0);

  ext = gtk_entry_new ();
  gtk_widget_show (ext);
  gtk_box_pack_start (GTK_BOX (hbox96), ext, TRUE, TRUE, 0);
  gtk_widget_set_tooltip_text (ext, _("E.g. mp3"));
  gtk_entry_set_invisible_char (GTK_ENTRY (ext), 9679);
  gtk_entry_set_activates_default (GTK_ENTRY (ext), TRUE);

  hbox72 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox72);
  gtk_box_pack_start (GTK_BOX (vbox27), hbox72, FALSE, TRUE, 0);

  label106 = gtk_label_new (_("Command line:"));
  gtk_widget_show (label106);
  gtk_box_pack_start (GTK_BOX (hbox72), label106, FALSE, FALSE, 0);

  hbox93 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox93);
  gtk_box_pack_start (GTK_BOX (hbox72), hbox93, TRUE, TRUE, 0);

  encoder = gtk_entry_new ();
  gtk_widget_show (encoder);
  gtk_box_pack_start (GTK_BOX (hbox93), encoder, TRUE, TRUE, 0);
  gtk_widget_set_tooltip_text (encoder, _("Example: lame - %o\n%i for input file, %o for output file, - for stdin"));
  gtk_entry_set_invisible_char (GTK_ENTRY (encoder), 9679);
  gtk_entry_set_activates_default (GTK_ENTRY (encoder), TRUE);

  custom4 = encoder_cmdline_help_link_create ("custom4", "", "", 0, 0);
  gtk_widget_show (custom4);
  gtk_box_pack_start (GTK_BOX (hbox93), custom4, TRUE, TRUE, 0);
  gtk_widget_set_can_focus(custom4, FALSE);
  gtk_widget_set_can_default(custom4, FALSE);

  label124 = gtk_label_new (_("<small>%o - output file name\n%i - temporary input file name</small>"));
  gtk_widget_show (label124);
  gtk_box_pack_start (GTK_BOX (vbox27), label124, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label124), TRUE);

  hbox73 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox73);
  gtk_box_pack_start (GTK_BOX (vbox27), hbox73, FALSE, TRUE, 0);

  label107 = gtk_label_new (_("Method:"));
  gtk_widget_show (label107);
  gtk_box_pack_start (GTK_BOX (hbox73), label107, FALSE, FALSE, 0);

  method = gtk_combo_box_text_new ();
  gtk_widget_show (method);
  gtk_box_pack_start (GTK_BOX (hbox73), method, TRUE, TRUE, 0);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (method), _("Pipe"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (method), _("Temporary file"));

  frame9 = gtk_frame_new (NULL);
  gtk_widget_show (frame9);
  gtk_box_pack_start (GTK_BOX (vbox27), frame9, FALSE, FALSE, 0);

  alignment21 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment21);
  gtk_container_add (GTK_CONTAINER (frame9), alignment21);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment21), 0, 0, 12, 0);

  table2 = gtk_table_new (2, 3, FALSE);
  gtk_widget_show (table2);
  gtk_container_add (GTK_CONTAINER (alignment21), table2);
  gtk_container_set_border_width (GTK_CONTAINER (table2), 8);
  gtk_table_set_col_spacings (GTK_TABLE (table2), 8);

  apev2 = gtk_check_button_new_with_mnemonic (_("APEv2"));
  gtk_widget_show (apev2);
  gtk_table_attach (GTK_TABLE (table2), apev2, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  id3v1 = gtk_check_button_new_with_mnemonic (_("ID3v1"));
  gtk_widget_show (id3v1);
  gtk_table_attach (GTK_TABLE (table2), id3v1, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  oggvorbis = gtk_check_button_new_with_mnemonic (_("OggVorbis"));
  gtk_widget_show (oggvorbis);
  gtk_table_attach (GTK_TABLE (table2), oggvorbis, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  flac = gtk_check_button_new_with_mnemonic (_("FLAC"));
  gtk_widget_show (flac);
  gtk_table_attach (GTK_TABLE (table2), flac, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hbox104 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox104);
  gtk_table_attach (GTK_TABLE (table2), hbox104, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  id3v2 = gtk_check_button_new_with_mnemonic (_("ID3v2"));
  gtk_widget_show (id3v2);
  gtk_box_pack_start (GTK_BOX (hbox104), id3v2, FALSE, FALSE, 0);

  id3v2_version = gtk_combo_box_text_new ();
  gtk_widget_show (id3v2_version);
  gtk_box_pack_start (GTK_BOX (hbox104), id3v2_version, TRUE, TRUE, 0);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (id3v2_version), "2.3");
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (id3v2_version), "2.4");

  label125 = gtk_label_new (_("<b>Tag writer</b>"));
  gtk_widget_show (label125);
  gtk_frame_set_label_widget (GTK_FRAME (frame9), label125);
  gtk_label_set_use_markup (GTK_LABEL (label125), TRUE);

  dialog_action_area6 = gtk_dialog_get_action_area (GTK_DIALOG (convpreset_editor));
  gtk_widget_show (dialog_action_area6);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area6), GTK_BUTTONBOX_END);

  convpreset_cancel = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (convpreset_cancel);
  gtk_dialog_add_action_widget (GTK_DIALOG (convpreset_editor), convpreset_cancel, GTK_RESPONSE_CANCEL);
  gtk_widget_set_can_default(convpreset_cancel, TRUE);

  convpreset_ok = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (convpreset_ok);
  gtk_dialog_add_action_widget (GTK_DIALOG (convpreset_editor), convpreset_ok, GTK_RESPONSE_OK);
  gtk_widget_set_can_default(convpreset_ok, TRUE);

  g_signal_connect ((gpointer) encoder, "changed",
                    G_CALLBACK (on_encoder_changed),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (convpreset_editor, convpreset_editor, "convpreset_editor");
  GLADE_HOOKUP_OBJECT_NO_REF (convpreset_editor, dialog_vbox7, "dialog_vbox7");
  GLADE_HOOKUP_OBJECT (convpreset_editor, vbox27, "vbox27");
  GLADE_HOOKUP_OBJECT (convpreset_editor, hbox70, "hbox70");
  GLADE_HOOKUP_OBJECT (convpreset_editor, label105, "label105");
  GLADE_HOOKUP_OBJECT (convpreset_editor, title, "title");
  GLADE_HOOKUP_OBJECT (convpreset_editor, hbox96, "hbox96");
  GLADE_HOOKUP_OBJECT (convpreset_editor, label120, "label120");
  GLADE_HOOKUP_OBJECT (convpreset_editor, ext, "ext");
  GLADE_HOOKUP_OBJECT (convpreset_editor, hbox72, "hbox72");
  GLADE_HOOKUP_OBJECT (convpreset_editor, label106, "label106");
  GLADE_HOOKUP_OBJECT (convpreset_editor, hbox93, "hbox93");
  GLADE_HOOKUP_OBJECT (convpreset_editor, encoder, "encoder");
  GLADE_HOOKUP_OBJECT (convpreset_editor, custom4, "custom4");
  GLADE_HOOKUP_OBJECT (convpreset_editor, label124, "label124");
  GLADE_HOOKUP_OBJECT (convpreset_editor, hbox73, "hbox73");
  GLADE_HOOKUP_OBJECT (convpreset_editor, label107, "label107");
  GLADE_HOOKUP_OBJECT (convpreset_editor, method, "method");
  GLADE_HOOKUP_OBJECT (convpreset_editor, frame9, "frame9");
  GLADE_HOOKUP_OBJECT (convpreset_editor, alignment21, "alignment21");
  GLADE_HOOKUP_OBJECT (convpreset_editor, table2, "table2");
  GLADE_HOOKUP_OBJECT (convpreset_editor, apev2, "apev2");
  GLADE_HOOKUP_OBJECT (convpreset_editor, id3v1, "id3v1");
  GLADE_HOOKUP_OBJECT (convpreset_editor, oggvorbis, "oggvorbis");
  GLADE_HOOKUP_OBJECT (convpreset_editor, flac, "flac");
  GLADE_HOOKUP_OBJECT (convpreset_editor, hbox104, "hbox104");
  GLADE_HOOKUP_OBJECT (convpreset_editor, id3v2, "id3v2");
  GLADE_HOOKUP_OBJECT (convpreset_editor, id3v2_version, "id3v2_version");
  GLADE_HOOKUP_OBJECT (convpreset_editor, label125, "label125");
  GLADE_HOOKUP_OBJECT_NO_REF (convpreset_editor, dialog_action_area6, "dialog_action_area6");
  GLADE_HOOKUP_OBJECT (convpreset_editor, convpreset_cancel, "convpreset_cancel");
  GLADE_HOOKUP_OBJECT (convpreset_editor, convpreset_ok, "convpreset_ok");

  return convpreset_editor;
}

GtkWidget*
create_dsppreset_editor (void)
{
  GtkWidget *dsppreset_editor;
  GtkWidget *dialog_vbox9;
  GtkWidget *vbox30;
  GtkWidget *hbox81;
  GtkWidget *label111;
  GtkWidget *title;
  GtkWidget *vbox29;
  GtkWidget *hbox82;
  GtkWidget *add;
  GtkWidget *remove;
  GtkWidget *configure;
  GtkWidget *hbox98;
  GtkWidget *scrolledwindow7;
  GtkWidget *plugins;
  GtkWidget *vbox34;
  GtkWidget *up;
  GtkWidget *down;
  GtkWidget *dialog_action_area8;
  GtkWidget *cancelbutton6;
  GtkWidget *okbutton6;

  dsppreset_editor = gtk_dialog_new ();
  gtk_widget_set_size_request (dsppreset_editor, 468, 254);
  gtk_window_set_title (GTK_WINDOW (dsppreset_editor), _("DSP Preset Editor"));
  gtk_window_set_modal (GTK_WINDOW (dsppreset_editor), TRUE);
  gtk_window_set_type_hint (GTK_WINDOW (dsppreset_editor), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox9 = gtk_dialog_get_content_area (GTK_DIALOG (dsppreset_editor));
  gtk_widget_show (dialog_vbox9);

  vbox30 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox30);
  gtk_box_pack_start (GTK_BOX (dialog_vbox9), vbox30, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox30), 12);

  hbox81 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox81);
  gtk_box_pack_start (GTK_BOX (vbox30), hbox81, FALSE, TRUE, 0);

  label111 = gtk_label_new (_("Title"));
  gtk_widget_show (label111);
  gtk_box_pack_start (GTK_BOX (hbox81), label111, FALSE, FALSE, 0);

  title = gtk_entry_new ();
  gtk_widget_show (title);
  gtk_box_pack_start (GTK_BOX (hbox81), title, TRUE, TRUE, 0);
  gtk_entry_set_text (GTK_ENTRY (title), _("Untitled DSP Preset"));
  gtk_entry_set_invisible_char (GTK_ENTRY (title), 9679);
  gtk_entry_set_activates_default (GTK_ENTRY (title), TRUE);

  vbox29 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox29);
  gtk_box_pack_start (GTK_BOX (vbox30), vbox29, TRUE, TRUE, 0);

  hbox82 = gtk_hbox_new (TRUE, 8);
  gtk_widget_show (hbox82);
  gtk_box_pack_start (GTK_BOX (vbox29), hbox82, FALSE, TRUE, 0);

  add = gtk_button_new_with_mnemonic (_("Add"));
  gtk_widget_show (add);
  gtk_box_pack_start (GTK_BOX (hbox82), add, TRUE, TRUE, 0);

  remove = gtk_button_new_with_mnemonic (_("Remove"));
  gtk_widget_show (remove);
  gtk_box_pack_start (GTK_BOX (hbox82), remove, TRUE, TRUE, 0);

  configure = gtk_button_new_with_mnemonic (_("Configure"));
  gtk_widget_show (configure);
  gtk_box_pack_start (GTK_BOX (hbox82), configure, TRUE, TRUE, 0);

  hbox98 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox98);
  gtk_box_pack_start (GTK_BOX (vbox29), hbox98, TRUE, TRUE, 0);

  scrolledwindow7 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow7);
  gtk_box_pack_start (GTK_BOX (hbox98), scrolledwindow7, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow7), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow7), GTK_SHADOW_IN);

  plugins = gtk_tree_view_new ();
  gtk_widget_show (plugins);
  gtk_container_add (GTK_CONTAINER (scrolledwindow7), plugins);
  gtk_widget_set_size_request (plugins, 196, -1);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (plugins), FALSE);

  vbox34 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox34);
  gtk_box_pack_start (GTK_BOX (hbox98), vbox34, FALSE, FALSE, 0);

  up = gtk_button_new_from_stock ("gtk-go-up");
  gtk_widget_show (up);
  gtk_box_pack_start (GTK_BOX (vbox34), up, FALSE, FALSE, 0);

  down = gtk_button_new_from_stock ("gtk-go-down");
  gtk_widget_show (down);
  gtk_box_pack_start (GTK_BOX (vbox34), down, FALSE, FALSE, 0);

  dialog_action_area8 = gtk_dialog_get_action_area (GTK_DIALOG (dsppreset_editor));
  gtk_widget_show (dialog_action_area8);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area8), GTK_BUTTONBOX_END);

  cancelbutton6 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton6);
  gtk_dialog_add_action_widget (GTK_DIALOG (dsppreset_editor), cancelbutton6, GTK_RESPONSE_CANCEL);
  gtk_widget_set_can_default(cancelbutton6, TRUE);

  okbutton6 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton6);
  gtk_dialog_add_action_widget (GTK_DIALOG (dsppreset_editor), okbutton6, GTK_RESPONSE_OK);
  gtk_widget_set_can_default(okbutton6, TRUE);

  g_signal_connect ((gpointer) add, "clicked",
                    G_CALLBACK (on_dsp_preset_add_plugin_clicked),
                    NULL);
  g_signal_connect ((gpointer) remove, "clicked",
                    G_CALLBACK (on_dsp_preset_remove_plugin_clicked),
                    NULL);
  g_signal_connect ((gpointer) configure, "clicked",
                    G_CALLBACK (on_dsp_preset_plugin_configure_clicked),
                    NULL);
  g_signal_connect ((gpointer) up, "clicked",
                    G_CALLBACK (on_dsp_preset_plugin_up_clicked),
                    NULL);
  g_signal_connect ((gpointer) down, "clicked",
                    G_CALLBACK (on_dsp_preset_plugin_down_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dsppreset_editor, dsppreset_editor, "dsppreset_editor");
  GLADE_HOOKUP_OBJECT_NO_REF (dsppreset_editor, dialog_vbox9, "dialog_vbox9");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, vbox30, "vbox30");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, hbox81, "hbox81");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, label111, "label111");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, title, "title");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, vbox29, "vbox29");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, hbox82, "hbox82");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, add, "add");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, remove, "remove");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, configure, "configure");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, hbox98, "hbox98");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, scrolledwindow7, "scrolledwindow7");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, plugins, "plugins");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, vbox34, "vbox34");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, up, "up");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, down, "down");
  GLADE_HOOKUP_OBJECT_NO_REF (dsppreset_editor, dialog_action_area8, "dialog_action_area8");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, cancelbutton6, "cancelbutton6");
  GLADE_HOOKUP_OBJECT (dsppreset_editor, okbutton6, "okbutton6");

  return dsppreset_editor;
}

GtkWidget*
create_select_dsp_plugin (void)
{
  GtkWidget *select_dsp_plugin;
  GtkWidget *dialog_vbox10;
  GtkWidget *vbox31;
  GtkWidget *hbox85;
  GtkWidget *label113;
  GtkWidget *plugin;
  GtkWidget *dialog_action_area9;
  GtkWidget *cancelbutton7;
  GtkWidget *okbutton7;

  select_dsp_plugin = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (select_dsp_plugin), _("Select DSP Plugin"));
  gtk_window_set_modal (GTK_WINDOW (select_dsp_plugin), TRUE);
  gtk_window_set_type_hint (GTK_WINDOW (select_dsp_plugin), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox10 = gtk_dialog_get_content_area (GTK_DIALOG (select_dsp_plugin));
  gtk_widget_show (dialog_vbox10);

  vbox31 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox31);
  gtk_box_pack_start (GTK_BOX (dialog_vbox10), vbox31, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox31), 12);

  hbox85 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox85);
  gtk_box_pack_start (GTK_BOX (vbox31), hbox85, FALSE, FALSE, 0);

  label113 = gtk_label_new (_("Plugin"));
  gtk_widget_show (label113);
  gtk_box_pack_start (GTK_BOX (hbox85), label113, FALSE, FALSE, 0);

  plugin = gtk_combo_box_text_new ();
  gtk_widget_show (plugin);
  gtk_box_pack_start (GTK_BOX (hbox85), plugin, TRUE, TRUE, 0);
  gtk_widget_set_size_request (plugin, 232, -1);

  dialog_action_area9 = gtk_dialog_get_action_area (GTK_DIALOG (select_dsp_plugin));
  gtk_widget_show (dialog_action_area9);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area9), GTK_BUTTONBOX_END);

  cancelbutton7 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton7);
  gtk_dialog_add_action_widget (GTK_DIALOG (select_dsp_plugin), cancelbutton7, GTK_RESPONSE_CANCEL);
  gtk_widget_set_can_default(cancelbutton7, TRUE);

  okbutton7 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton7);
  gtk_dialog_add_action_widget (GTK_DIALOG (select_dsp_plugin), okbutton7, GTK_RESPONSE_OK);
  gtk_widget_set_can_default(okbutton7, TRUE);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (select_dsp_plugin, select_dsp_plugin, "select_dsp_plugin");
  GLADE_HOOKUP_OBJECT_NO_REF (select_dsp_plugin, dialog_vbox10, "dialog_vbox10");
  GLADE_HOOKUP_OBJECT (select_dsp_plugin, vbox31, "vbox31");
  GLADE_HOOKUP_OBJECT (select_dsp_plugin, hbox85, "hbox85");
  GLADE_HOOKUP_OBJECT (select_dsp_plugin, label113, "label113");
  GLADE_HOOKUP_OBJECT (select_dsp_plugin, plugin, "plugin");
  GLADE_HOOKUP_OBJECT_NO_REF (select_dsp_plugin, dialog_action_area9, "dialog_action_area9");
  GLADE_HOOKUP_OBJECT (select_dsp_plugin, cancelbutton7, "cancelbutton7");
  GLADE_HOOKUP_OBJECT (select_dsp_plugin, okbutton7, "okbutton7");

  return select_dsp_plugin;
}

GtkWidget*
create_preset_list (void)
{
  GtkWidget *preset_list;
  GtkWidget *dialog_vbox11;
  GtkWidget *vbox33;
  GtkWidget *hbox94;
  GtkWidget *add;
  GtkWidget *copy;
  GtkWidget *remove;
  GtkWidget *edit;
  GtkWidget *scrolledwindow8;
  GtkWidget *presets;
  GtkWidget *dialog_action_area10;
  GtkWidget *okbutton8;

  preset_list = gtk_dialog_new ();
  gtk_widget_set_size_request (preset_list, 450, 254);
  gtk_window_set_title (GTK_WINDOW (preset_list), _("Presets"));
  gtk_window_set_modal (GTK_WINDOW (preset_list), TRUE);
  gtk_window_set_type_hint (GTK_WINDOW (preset_list), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox11 = gtk_dialog_get_content_area (GTK_DIALOG (preset_list));
  gtk_widget_show (dialog_vbox11);

  vbox33 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox33);
  gtk_box_pack_start (GTK_BOX (dialog_vbox11), vbox33, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox33), 12);

  hbox94 = gtk_hbox_new (TRUE, 8);
  gtk_widget_show (hbox94);
  gtk_box_pack_start (GTK_BOX (vbox33), hbox94, FALSE, TRUE, 0);

  add = gtk_button_new_from_stock ("gtk-add");
  gtk_widget_show (add);
  gtk_box_pack_start (GTK_BOX (hbox94), add, FALSE, TRUE, 0);

  copy = gtk_button_new_from_stock ("gtk-copy");
  gtk_widget_show (copy);
  gtk_box_pack_start (GTK_BOX (hbox94), copy, FALSE, TRUE, 0);

  remove = gtk_button_new_from_stock ("gtk-remove");
  gtk_widget_show (remove);
  gtk_box_pack_start (GTK_BOX (hbox94), remove, FALSE, TRUE, 0);

  edit = gtk_button_new_from_stock ("gtk-edit");
  gtk_widget_show (edit);
  gtk_box_pack_start (GTK_BOX (hbox94), edit, FALSE, TRUE, 0);

  scrolledwindow8 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow8);
  gtk_box_pack_start (GTK_BOX (vbox33), scrolledwindow8, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow8), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow8), GTK_SHADOW_IN);

  presets = gtk_tree_view_new ();
  gtk_widget_show (presets);
  gtk_container_add (GTK_CONTAINER (scrolledwindow8), presets);
  gtk_widget_set_size_request (presets, 400, 160);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (presets), FALSE);

  dialog_action_area10 = gtk_dialog_get_action_area (GTK_DIALOG (preset_list));
  gtk_widget_show (dialog_action_area10);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area10), GTK_BUTTONBOX_END);

  okbutton8 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (okbutton8);
  gtk_dialog_add_action_widget (GTK_DIALOG (preset_list), okbutton8, GTK_RESPONSE_CLOSE);
  gtk_widget_set_can_default(okbutton8, TRUE);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (preset_list, preset_list, "preset_list");
  GLADE_HOOKUP_OBJECT_NO_REF (preset_list, dialog_vbox11, "dialog_vbox11");
  GLADE_HOOKUP_OBJECT (preset_list, vbox33, "vbox33");
  GLADE_HOOKUP_OBJECT (preset_list, hbox94, "hbox94");
  GLADE_HOOKUP_OBJECT (preset_list, add, "add");
  GLADE_HOOKUP_OBJECT (preset_list, copy, "copy");
  GLADE_HOOKUP_OBJECT (preset_list, remove, "remove");
  GLADE_HOOKUP_OBJECT (preset_list, edit, "edit");
  GLADE_HOOKUP_OBJECT (preset_list, scrolledwindow8, "scrolledwindow8");
  GLADE_HOOKUP_OBJECT (preset_list, presets, "presets");
  GLADE_HOOKUP_OBJECT_NO_REF (preset_list, dialog_action_area10, "dialog_action_area10");
  GLADE_HOOKUP_OBJECT (preset_list, okbutton8, "okbutton8");

  return preset_list;
}

