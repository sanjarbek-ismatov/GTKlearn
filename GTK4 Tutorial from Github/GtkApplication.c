#include<gtk/gtk.h>
static void app_activate(GApplication *app, gpointer *user_data){
    g_print("The app is activated!\n");
}
int main(int argc, char **argv){
    GtkApplication *app;
    int stat;
    app = gtk_application_new("my.app.test1", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
    g_object_ref(app);
    stat = g_application_run(G_APPLICATION(app), argc, argv);
    return stat;
}