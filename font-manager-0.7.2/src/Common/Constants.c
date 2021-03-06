/* Constants.c generated by valac 0.26.1, the Vala compiler
 * generated from Constants.vala, do not modify */

/* Constants.vala
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
#include <glib/gi18n-lib.h>
#include <float.h>
#include <math.h>




#define FONT_MANAGER_NAME "font-manager"
#define FONT_MANAGER_SCHEMA_ID "org.gnome.FontManager"
#define FONT_MANAGER_BUS_ID FONT_MANAGER_SCHEMA_ID
#define FONT_MANAGER_BUS_PATH "/org/gnome/FontManager"
#define FONT_MANAGER_TMPL "font-manager_XXXXXX"
#define FONT_MANAGER_AUTHOR "Jerry Casiano <JerryCasiano@gmail.com>"
#define FONT_MANAGER_DEFAULT_COLLECTION_NAME _ ("Enter Collection Name")
#define FONT_MANAGER_DEFAULT_FONT "Sans"
#define FONT_MANAGER_DEFAULT_PREVIEW_TEXT "\n" \
"%s\n" \
"\n" \
"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n" \
"abcdefghijklmnopqrstuvwxyz\n" \
"1234567890.:,;(*!?')\n" \
"\n"
#define FONT_MANAGER_DEFAULT_PREVIEW_SIZE ((gdouble) 10)
#define FONT_MANAGER_MIN_FONT_SIZE 6.0
#define FONT_MANAGER_MAX_FONT_SIZE 96.0
#define FONT_MANAGER_LOREM_IPSUM "\n" \
"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent sed " \
"tristique nunc. Sed augue dolor, posuere a auctor quis, dignissim sed " \
"est. Aliquam convallis, orci nec posuere lacinia, risus libero mattis " \
"velit, a consectetur orci felis venenatis neque. Praesent id lacinia m" \
"assa. Nam risus diam, faucibus vitae pulvinar eget, scelerisque nec ni" \
"sl. Integer dolor ligula, placerat id elementum id, venenatis sed mass" \
"a. Vestibulum at convallis libero. Curabitur at molestie justo.\n" \
"\n" \
"Mauris convallis odio rutrum elit aliquet quis fermentum velit tempus." \
" Ut porttitor lectus at dui iaculis in vestibulum eros tristique. Vest" \
"ibulum ante ipsum primis in faucibus orci luctus et ultrices posuere c" \
"ubilia Curae; Donec ut dui massa, at aliquet leo. Cras sagittis pulvin" \
"ar nunc. Fusce eget felis ut dolor blandit scelerisque non eget risus." \
" Nunc elementum ipsum id lacus porttitor accumsan. Suspendisse at quam" \
" ligula, ultrices bibendum massa.\n" \
"\n" \
"Mauris feugiat, orci non fermentum congue, libero est rutrum sem, non " \
"dignissim justo urna at turpis. Donec non varius augue. Fusce id enim " \
"ligula, sit amet mattis urna. Ut sodales augue tristique tortor lobort" \
"is vestibulum. Maecenas quis tortor lacus. Etiam varius hendrerit bibe" \
"ndum. Nullam pretium nulla in sem blandit vel facilisis felis fermentu" \
"m. Integer aliquet leo nec nunc sollicitudin congue. In hac habitasse " \
"platea dictumst. Curabitur mattis nibh ac velit euismod condimentum. P" \
"ellentesque volutpat, neque ac congue fermentum, turpis metus posuere " \
"turpis, ac facilisis velit lectus sed diam. Etiam dui diam, tempus vit" \
"ae fringilla quis, tincidunt ac libero.\n" \
"\n" \
"Quisque sollicitudin eros sit amet lorem semper nec imperdiet ante veh" \
"icula. Proin a vulputate sem. Aliquam erat volutpat. Vestibulum congue" \
" pulvinar eros eu vestibulum. Phasellus metus mauris, suscipit tristiq" \
"ue ullamcorper laoreet, viverra eget libero. Donec id nibh justo. Aliq" \
"uam sagittis ultricies erat. Integer sed purus felis. Pellentesque leo" \
" nisi, sagittis non tincidunt vitae, porta quis eros. Pellentesque ut " \
"ornare erat. Vivamus semper sodales suscipit. Praesent placerat eleife" \
"nd nibh quis tristique. Aenean ullamcorper pellentesque ultrices. Nunc" \
" eu risus turpis, in condimentum dui. Aliquam erat volutpat. Phasellus" \
" sagittis mattis diam, sit amet pharetra lacus cursus non.\n" \
"\n" \
"Vestibulum sed est id velit rhoncus imperdiet. Aliquam dictum, arcu at" \
" tincidunt condimentum, metus ligula molestie lorem, eget congue torto" \
"r est ut massa. Duis ut pulvinar nisl. Aenean sodales purus id risus h" \
"endrerit sit amet mattis sem blandit. Aenean feugiat dapibus mattis. P" \
"raesent non nibh magna. Nulla facilisi. Nam elementum malesuada sagitt" \
"is. Cras et tellus augue, non rhoncus libero. Suspendisse ut nulla mau" \
"ris.\n" \
"\n" \
"Suspendisse potenti. Nulla neque leo, condimentum nec posuere non, ele" \
"mentum sit amet lorem. Integer ut ante libero, a tristique quam. Nulla" \
" libero nibh, bibendum eget blandit non, viverra in velit. Duis sit am" \
"et ipsum in massa imperdiet interdum. Phasellus venenatis consequat le" \
"ctus eget facilisis. Quisque ullamcorper rutrum erat at egestas. Integ" \
"er pharetra pulvinar odio, sagittis imperdiet ligula aliquam suscipit." \
" Aenean rutrum convallis felis, at rhoncus lectus tincidunt et. Morbi " \
"mattis risus eu quam suscipit ut tempus nunc pellentesque. Ut adipisci" \
"ng, nibh nec pharetra fringilla, diam diam hendrerit neque, quis preti" \
"um tellus ligula ut dolor. Nullam dictum, libero in molestie convallis" \
", nunc arcu imperdiet risus, vitae laoreet risus ipsum in ligula. Clas" \
"s aptent taciti sociosqu ad litora torquent per conubia nostra, per in" \
"ceptos himenaeos. Donec molestie, quam ut adipiscing consequat, risus " \
"sem facilisis nisi, ut aliquet sapien est a sapien. Quisque sed enim j" \
"usto, sit amet volutpat urna.\n" \
"\n" \
"Integer faucibus, velit sit amet aliquam fermentum, turpis massa facil" \
"isis nunc, eu vulputate lorem sapien at sapien. Quisque sed lacus non " \
"massa varius fermentum. Fusce non consectetur odio. Integer tincidunt " \
"tincidunt ullamcorper. In hac habitasse platea dictumst. Donec tellus " \
"est, feugiat in auctor sed, sodales non urna. Curabitur semper cursus " \
"eros, id hendrerit tortor pulvinar at. Mauris gravida odio vel lorem m" \
"attis varius. Donec vulputate aliquam dui et dignissim. Pellentesque c" \
"onsectetur nisi sit amet libero consectetur quis imperdiet libero tris" \
"tique. Praesent nec enim ante. Proin quam mauris, vehicula vel loborti" \
"s at, tempor vitae augue. Sed ut urna vel eros facilisis mollis vulput" \
"ate at nisl. Integer lobortis magna vitae urna varius tristique. In ha" \
"c habitasse platea dictumst.\n" \
"\n" \
"Sed ac molestie ante. Fusce ultrices laoreet felis ac lobortis. Curabi" \
"tur a vulputate risus. Suspendisse auctor pulvinar semper. Mauris nec " \
"ipsum vitae justo malesuada tincidunt. In suscipit porttitor nibh, at " \
"convallis justo ultrices ac. Sed vitae turpis vel quam malesuada gravi" \
"da a non ante.\n" \
"\n" \
"Suspendisse sit amet felis sit amet nisl lacinia ultrices ut vitae tel" \
"lus. In hac habitasse platea dictumst. In hac habitasse platea dictums" \
"t. Sed interdum porta dui, in placerat arcu porttitor vel. Nullam just" \
"o velit, blandit ut accumsan id, ullamcorper sed lacus. Nullam sceleri" \
"sque tellus vitae nisi placerat sollicitudin. Integer massa erat, faci" \
"lisis sed porta eu, porttitor at leo. Praesent mauris mi, tincidunt id" \
" cursus et, consequat sit amet arcu. Sed posuere erat nec nunc hendrer" \
"it id semper quam facilisis. Curabitur pretium placerat neque at sodal" \
"es.\n" \
"\n" \
"Etiam augue eros, dictum eu adipiscing in, aliquam quis dui. Pellentes" \
"que auctor sem mattis magna faucibus vulputate. Nam arcu purus, eleife" \
"nd eget sagittis ac, posuere a lorem. Aenean urna magna, viverra quis " \
"commodo vitae, gravida eget arcu. Maecenas ut turpis magna, mattis gra" \
"vida risus. Cum sociis natoque penatibus et magnis dis parturient mont" \
"es, nascetur ridiculus mus. Donec eu libero sem. Donec eget nibh id tu" \
"rpis convallis tincidunt. Fusce vulputate tempor tempor.\n" \
"\n" \
"Nunc eleifend metus in augue rhoncus sodales. Nam vel enim at neque tr" \
"istique accumsan. Nunc ac venenatis massa. Morbi gravida facilisis odi" \
"o sit amet venenatis. Maecenas sodales euismod nisi eu bibendum. Duis " \
"tempor pulvinar diam, nec mollis risus viverra quis. Nullam ipsum maur" \
"is, fringilla eget vulputate a, euismod ac urna. Nam eu eros sapien. P" \
"hasellus et eros lorem. Quisque varius porta pharetra. Donec vel liber" \
"o euismod arcu pharetra tincidunt. Sed sit amet neque erat. Mauris dic" \
"tum nisi quis risus tincidunt pellentesque. Maecenas accumsan elit rho" \
"ncus tortor elementum pretium. Donec dictum convallis lectus in fermen" \
"tum. Mauris accumsan, turpis ac consectetur varius, lacus metus sagitt" \
"is neque, in tincidunt dui enim id diam.\n" \
"\n" \
"Aenean lacinia eros nec enim cursus at porttitor quam suscipit. Nam qu" \
"am turpis, iaculis et congue non, dignissim nec neque. Mauris nec erat" \
" erat, vitae ornare velit. Aenean suscipit, eros eu cursus imperdiet, " \
"felis lacus lobortis metus, ac laoreet tellus nunc id arcu. Etiam libe" \
"ro mi, pellentesque in feugiat nec, tincidunt in sapien. Fusce eu mi s" \
"ed libero ullamcorper congue. Suspendisse eu sem sed arcu pulvinar ves" \
"tibulum vel in lorem. Phasellus aliquam elementum iaculis. Etiam dictu" \
"m luctus nisi sit amet mattis. Mauris mollis placerat varius.\n" \
"\n" \
"Cras ultricies elit eget lectus sagittis sit amet rutrum enim tempus. " \
"Vivamus a risus pharetra nibh dapibus volutpat vitae sed arcu. Class a" \
"ptent taciti sociosqu ad litora torquent per conubia nostra, per incep" \
"tos himenaeos. Quisque a augue nibh, nec congue metus. Integer element" \
"um, purus sit amet vehicula gravida, mi magna hendrerit turpis, at ali" \
"quam purus velit eget tortor. Integer suscipit posuere massa, quis cur" \
"sus massa tincidunt id. Integer placerat quam quis massa dapibus egest" \
"as at eu lorem. Aenean quis nunc sed massa lobortis tincidunt. Phasell" \
"us quis sem dolor. Phasellus auctor ipsum at ligula euismod eu sagitti" \
"s justo dapibus. Pellentesque pulvinar, magna eget interdum eleifend, " \
"urna lectus adipiscing dui, eu cursus nulla tellus in lacus. Vivamus q" \
"uis urna magna, a placerat est. Nullam justo tellus, elementum at vive" \
"rra at, posuere quis magna.\n" \
"\n" \
"Sed non est sed nibh blandit tincidunt. Fusce nec sem a mi mollis cond" \
"imentum. Nulla ut lacinia tellus. Vestibulum iaculis fermentum risus, " \
"vel lobortis lorem posuere quis. Donec consequat ligula et arcu faucib" \
"us sed tempor sem ullamcorper. Curabitur sapien odio, egestas non cong" \
"ue id, dapibus non nisl. Nam euismod, massa eu laoreet tincidunt, veli" \
"t mi pharetra dolor, laoreet suscipit quam erat vel felis. Praesent vu" \
"lputate ipsum et elit scelerisque rhoncus. Nam ligula magna, gravida a" \
"c varius at, facilisis vitae ipsum. Praesent eleifend eleifend massa, " \
"tincidunt pharetra felis tincidunt nec. Etiam eu sapien lorem. Donec e" \
"uismod faucibus erat a semper. Duis pharetra nulla at libero sollicitu" \
"din sed vestibulum diam egestas. Nam dignissim quam et massa placerat " \
"ac tincidunt nulla dapibus. Curabitur mi mi, sagittis id pharetra sed," \
" semper eu ligula. Phasellus eu venenatis elit.\n" \
"\n" \
"Ut mi libero, pharetra in vestibulum et, blandit ac purus. Donec sit a" \
"met scelerisque massa. Morbi commodo nisi non mi rhoncus vel pharetra " \
"lorem rutrum. Nulla eget arcu augue. Nunc ullamcorper, sapien ut imper" \
"diet imperdiet, lorem mauris commodo justo, sit amet sodales nisl sem " \
"id turpis. Sed interdum sem dictum neque ullamcorper varius. Nulla ele" \
"mentum pharetra scelerisque. Fusce ut augue non mauris suscipit consec" \
"tetur id vel justo. Vestibulum ante ipsum primis in faucibus orci luct" \
"us et ultrices posuere cubilia Curae; Phasellus metus nulla, tempus fa" \
"cilisis pharetra ut, aliquam a arcu.\n" \
"\n" \
"Morbi porttitor posuere rutrum. Nulla facilisi. Nam risus lorem, variu" \
"s at fermentum id, euismod eget tellus. Quisque ut interdum leo. Etiam" \
" eget neque urna, vitae iaculis ante. Curabitur semper nisl vel orci h" \
"endrerit accumsan. Phasellus vel mi ac tellus rhoncus viverra sit amet" \
" lobortis mauris. Vestibulum pharetra tristique enim, a mattis dolor c" \
"onsequat quis. Aenean auctor, mi quis rhoncus iaculis, urna ante condi" \
"mentum ligula, ac feugiat ipsum diam sit amet libero. Donec ac sapien " \
"ut quam ultrices pellentesque. Aenean venenatis ornare enim sed congue" \
". Integer nec est massa. Pellentesque tincidunt justo at magna dictum " \
"blandit. Maecenas ipsum velit, condimentum ut pharetra quis, aliquet c" \
"onsequat tellus.\n" \
"\n" \
"Mauris faucibus augue ut massa faucibus id hendrerit justo rutrum. Don" \
"ec accumsan odio vel turpis dignissim mattis. Suspendisse magna eros, " \
"tempus vel commodo eu, aliquet sed libero. Ut fermentum dui quis lorem" \
" scelerisque lobortis. Aliquam volutpat odio id velit malesuada condim" \
"entum. Nulla facilisi. Donec sed nisi eget risus adipiscing rutrum. Du" \
"is egestas scelerisque eleifend. Mauris neque ligula, ullamcorper sed " \
"tincidunt aliquet, facilisis non dolor. Mauris eget elit leo. Donec su" \
"scipit, felis sed auctor tincidunt, arcu velit posuere elit, malesuada" \
" molestie libero quam nec mauris.\n" \
"\n" \
"Morbi non nunc faucibus sem rutrum aliquam eget nec nisi. Donec iaculi" \
"s, arcu at elementum sollicitudin, libero enim dictum tellus, et pelle" \
"ntesque turpis erat aliquet dolor. Etiam et magna in nisi pharetra con" \
"sectetur. Phasellus accumsan volutpat nibh non dictum. Pellentesque pr" \
"etium tellus id neque ultricies iaculis. Ut a libero eget dolor portti" \
"tor hendrerit. Integer eleifend elit quis turpis lacinia vitae sceleri" \
"sque leo gravida.\n" \
"\n" \
"Curabitur tempor eros vitae velit ultrices ornare. Class aptent taciti" \
" sociosqu ad litora torquent per conubia nostra, per inceptos himenaeo" \
"s. Mauris tristique erat ac arcu gravida non dictum magna aliquam. Pha" \
"sellus eu velit quis est ullamcorper pharetra. Aenean vestibulum gravi" \
"da urna, vitae posuere libero dapibus ac. Etiam a massa eget felis tin" \
"cidunt pellentesque. Nulla facilisi. Nullam odio dui, commodo eu vulpu" \
"tate quis, feugiat in ipsum. Sed sed viverra sapien.\n" \
"\n" \
"Mauris consectetur neque ut mauris feugiat et rhoncus purus gravida. N" \
"am nibh sem, iaculis at lacinia vitae, faucibus lobortis mauris. Maece" \
"nas ornare urna sit amet eros blandit pulvinar. Suspendisse nisi massa" \
", ornare vitae vestibulum eget, dictum nec leo. Phasellus et risus ris" \
"us. Suspendisse potenti. Donec imperdiet eleifend dui tincidunt sodale" \
"s.\n" \
"\n" \
"Morbi ac erat nisi. Maecenas mi ante, rutrum at rhoncus viverra, facil" \
"isis quis turpis. Ut in lacus diam, ac euismod quam. Etiam auctor ultr" \
"icies consectetur. Vivamus semper, sem nec posuere eleifend, tortor lo" \
"rem sagittis urna, eu iaculis tortor leo et ligula. Nam vitae libero t" \
"ellus, vitae rutrum nulla. Phasellus suscipit massa eget mauris pharet" \
"ra adipiscing. Donec mattis sem in leo sollicitudin vitae tempus lorem" \
" tincidunt. Fusce sagittis metus sit amet ante scelerisque ut vulputat" \
"e felis venenatis. Cum sociis natoque penatibus et magnis dis parturie" \
"nt montes, nascetur ridiculus mus. Nulla dictum arcu eget metus sagitt" \
"is faucibus. Nulla eget mauris a tellus ornare dictum ac eu massa. Ves" \
"tibulum dapibus, turpis non adipiscing convallis, nisi turpis pharetra" \
" elit, ac tincidunt sem dui sit amet lacus. Pellentesque ac mi lacus, " \
"volutpat cursus leo. Ut ac sollicitudin nibh.\n" \
"\n" \
"Phasellus et porta risus. Ut a neque quam. Aliquam euismod diam vitae " \
"felis sodales pellentesque non sit amet ipsum. In lorem arcu, posuere " \
"at elementum at, malesuada in mauris. In viverra adipiscing adipiscing" \
". Cum sociis natoque penatibus et magnis dis parturient montes, nascet" \
"ur ridiculus mus. Sed ut lacus purus, non egestas quam. Curabitur conv" \
"allis, ipsum quis egestas varius, odio tellus accumsan ipsum, et inter" \
"dum eros felis posuere lorem. Fusce congue viverra quam, sed ullamcorp" \
"er orci euismod non. Vestibulum semper turpis eu turpis mollis eget al" \
"iquam turpis dapibus. Praesent volutpat justo eget ligula facilisis no" \
"n fermentum lorem consequat. Phasellus ac diam erat. Phasellus nisi le" \
"o, aliquet posuere facilisis eu, mattis non tellus. Pellentesque eros " \
"metus, pretium venenatis pharetra vel, ullamcorper ac est. Sed massa a" \
"nte, fermentum in tincidunt ac, eleifend eget turpis.\n" \
"\n" \
"Nullam commodo dui at quam pulvinar a luctus sapien pretium. In hendre" \
"rit pretium consectetur. Class aptent taciti sociosqu ad litora torque" \
"nt per conubia nostra, per inceptos himenaeos. Nam aliquet erat vel lo" \
"rem feugiat tincidunt. Ut eget magna lectus. Aliquam augue eros, gravi" \
"da vel commodo vel, interdum sit amet sapien. Sed nec turpis enim, a f" \
"aucibus orci. Nullam non lectus risus, vitae laoreet metus. Praesent i" \
"n erat dui. Ut ac laoreet nibh. Sed tortor eros, ultrices eu dapibus e" \
"t, tristique in quam. Vivamus id lacinia lacus. Sed et elit mi. Nullam" \
" erat purus, posuere at mollis in, tempor ut risus. Vivamus sollicitud" \
"in scelerisque vehicula.\n" \
"\n" \
"Morbi nec volutpat nulla. Sed venenatis ligula nec magna luctus sagitt" \
"is. Ut faucibus diam in lorem vulputate id porta turpis venenatis. Dui" \
"s tempus cursus erat, sit amet sollicitudin erat faucibus sit amet. Do" \
"nec facilisis, orci eget ultricies semper, elit ante euismod purus, at" \
" pretium turpis metus ac sapien. Pellentesque quis sem eget ante congu" \
"e gravida at sit amet erat. Nam condimentum arcu ut urna scelerisque e" \
"t fermentum mauris sagittis. In mauris lectus, accumsan eu malesuada e" \
"u, congue at nulla. Nulla dui elit, sodales non fermentum eget, iaculi" \
"s vitae est. Lorem ipsum dolor sit amet, consectetur adipiscing elit. " \
"Morbi arcu eros, ultricies a hendrerit a, faucibus in nibh. Vestibulum" \
" diam sapien, facilisis et placerat a, sodales ut leo. In luctus ligul" \
"a quis purus scelerisque varius ac id eros. Mauris consequat pulvinar " \
"diam at commodo.\n" \
"\n" \
"Vestibulum lobortis viverra quam, quis posuere est tincidunt nec. Vest" \
"ibulum ac elit non ligula faucibus pretium laoreet vel erat. Fusce sod" \
"ales, erat et condimentum luctus, justo lorem gravida tortor, eget con" \
"sequat orci risus ac metus. Sed pulvinar pretium felis et porta. Aliqu" \
"am erat volutpat. Integer pellentesque aliquam odio eu facilisis. Aene" \
"an ultrices felis eget risus tempus pulvinar. Pellentesque eros mi, gr" \
"avida vel condimentum nec, ornare ac neque. Phasellus risus ligula, ve" \
"hicula non varius non, tincidunt at arcu. Quisque at quam a lorem aliq" \
"uet tempus vel non sapien.\n"
#define FONT_MANAGER_CREATE_SQL "CREATE TABLE IF NOT EXISTS Fonts\n" \
"(\n" \
"uid INTEGER PRIMARY KEY,\n" \
"family TEXT,\n" \
"style TEXT,\n" \
"slant INTEGER,\n" \
"weight INTEGER,\n" \
"width INTEGER,\n" \
"spacing INTEGER,\n" \
"findex INTEGER,\n" \
"filepath TEXT,\n" \
"owner INTEGER,\n" \
"filetype TEXT,\n" \
"filesize TEXT,\n" \
"checksum TEXT,\n" \
"version TEXT,\n" \
"psname TEXT,\n" \
"description TEXT,\n" \
"vendor TEXT,\n" \
"copyright TEXT,\n" \
"license_type TEXT,\n" \
"license_data TEXT,\n" \
"license_url TEXT,\n" \
"panose TEXT,\n" \
"font_description TEXT\n" \
");\n"

const gchar* FONT_MANAGER_DEFAULT_VARIANTS[5] = {"Regular", "Roman", "Medium", "Normal", "Book"};
const gchar* FONT_MANAGER_DEFAULT_ALIASES[3] = {"Monospace", "Sans", "Serif"};
const gchar* FONT_MANAGER_VERSION_STRING_EXCLUDES[8] = {"Version", "version", "Revision", "revision", ";FFEdit", "$Revision", "$:", "$"};
const gchar* FONT_MANAGER_FONT_METRICS[3] = {".afm", ".pfa", ".pfm"};
const gchar* FONT_MANAGER_FONT_MIMETYPES[4] = {"application/x-font-ttf", "application/x-font-ttc", "application/x-font-otf", "application/x-font-type1"};
const gchar* FONT_MANAGER_ARCHIVE_IGNORE_LIST[1] = {"application/x-ms-dos-executable"};


