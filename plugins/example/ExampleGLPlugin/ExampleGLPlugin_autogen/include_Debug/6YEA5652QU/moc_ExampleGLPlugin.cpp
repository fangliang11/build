/****************************************************************************
** Meta object code from reading C++ file 'ExampleGLPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../plugins/example/ExampleGLPlugin/include/ExampleGLPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExampleGLPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExampleGLPlugin_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExampleGLPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExampleGLPlugin_t qt_meta_stringdata_ExampleGLPlugin = {
    {
QT_MOC_LITERAL(0, 0, 15) // "ExampleGLPlugin"

    },
    "ExampleGLPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExampleGLPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ExampleGLPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExampleGLPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ExampleGLPlugin.data,
    qt_meta_data_ExampleGLPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExampleGLPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExampleGLPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleGLPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccGLPluginInterface"))
        return static_cast< ccGLPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccPluginInterface/3.2"))
        return static_cast< ccPluginInterface*>(this);
    if (!strcmp(_clname, "cccorp.cloudcompare.ccGLFilterPluginInterface/1.4"))
        return static_cast< ccGLPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ExampleGLPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x24,  'c',  'c',  'c',  'o',  'r', 
    'p',  '.',  'c',  'l',  'o',  'u',  'd',  'c', 
    'o',  'm',  'p',  'a',  'r',  'e',  '.',  'p', 
    'l',  'u',  'g',  'i',  'n',  '.',  'E',  'x', 
    'a',  'm',  'p',  'l',  'e',  'G',  'L', 
    // "className"
    0x03,  0x6f,  'E',  'x',  'a',  'm',  'p',  'l', 
    'e',  'G',  'L',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa7,  0x67,  'a',  'u',  't',  'h',  'o', 
    'r',  's',  0x81,  0xa2,  0x65,  'e',  'm',  'a', 
    'i',  'l',  0x78,  0x1a,  'd',  'a',  'n',  'i', 
    'e',  'l',  '.',  'g',  'i',  'r',  'a',  'r', 
    'd',  'e',  'a',  'u',  '@',  'g',  'm',  'a', 
    'i',  'l',  '.',  'c',  'o',  'm',  0x64,  'n', 
    'a',  'm',  'e',  0x78,  0x18,  'D',  'a',  'n', 
    'i',  'e',  'l',  ' ',  'G',  'i',  'r',  'a', 
    'r',  'd',  'e',  'a',  'u',  '-',  'M',  'o', 
    'n',  't',  'a',  'u',  't',  0x6b,  'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x78,  0x23,  'B',  'i',  'l',  'a',  't', 
    'e',  'r',  'a',  'l',  ' ',  's',  'm',  'o', 
    'o',  't',  'h',  'i',  'n',  'g',  ' ',  '(', 
    'O',  'p',  'e',  'n',  'G',  'L',  ' ',  's', 
    'h',  'a',  'd',  'e',  'r',  ')',  0x64,  'i', 
    'c',  'o',  'n',  0x78,  0x2b,  ':',  '/',  'C', 
    'C',  '/',  'p',  'l',  'u',  'g',  'i',  'n', 
    '/',  'E',  'x',  'a',  'm',  'p',  'l',  'e', 
    'G',  'L',  'P',  'l',  'u',  'g',  'i',  'n', 
    '/',  'i',  'm',  'a',  'g',  'e',  's',  '/', 
    'i',  'c',  'o',  'n',  '.',  'p',  'n',  'g', 
    0x6b,  'm',  'a',  'i',  'n',  't',  'a',  'i', 
    'n',  'e',  'r',  's',  0x82,  0xa2,  0x65,  'e', 
    'm',  'a',  'i',  'l',  0x73,  'a',  's',  'm', 
    'a',  'l',  'o',  'n',  'e',  'y',  '@',  'g', 
    'm',  'a',  'i',  'l',  '.',  'c',  'o',  'm', 
    0x64,  'n',  'a',  'm',  'e',  0x6c,  'A',  'n', 
    'd',  'y',  ' ',  'M',  'a',  'l',  'o',  'n', 
    'e',  'y',  0xa1,  0x64,  'n',  'a',  'm',  'e', 
    0x6f,  'E',  'x',  'a',  'm',  'p',  'l',  'e', 
    ' ',  'N',  'o',  'E',  'm',  'a',  'i',  'l', 
    0x64,  'n',  'a',  'm',  'e',  0x73,  'E',  'x', 
    'a',  'm',  'p',  'l',  'e',  ' ',  '(',  'G', 
    'L',  ' ',  'P',  'l',  'u',  'g',  'i',  'n', 
    ')',  0x6a,  'r',  'e',  'f',  'e',  'r',  'e', 
    'n',  'c',  'e',  's',  0x81,  0xa2,  0x64,  't', 
    'e',  'x',  't',  0x70,  'B',  'i',  'l',  'a', 
    't',  'e',  'r',  'a',  'l',  ' ',  'f',  'i', 
    'l',  't',  'e',  'r',  0x63,  'u',  'r',  'l', 
    0x78,  0x2e,  'h',  't',  't',  'p',  's',  ':', 
    '/',  '/',  'e',  'n',  '.',  'w',  'i',  'k', 
    'i',  'p',  'e',  'd',  'i',  'a',  '.',  'o', 
    'r',  'g',  '/',  'w',  'i',  'k',  'i',  '/', 
    'B',  'i',  'l',  'a',  't',  'e',  'r',  'a', 
    'l',  '_',  'f',  'i',  'l',  't',  'e',  'r', 
    0x64,  't',  'y',  'p',  'e',  0x62,  'G',  'L', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ExampleGLPlugin, ExampleGLPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
