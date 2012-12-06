<?php

$_INSTALL['VERSION'] = 1.7;
$_INSTALL['PUBLIC_CLONE_URL'] = 'git://github.com/diversen/share.git';
$_INSTALL['PRIVATE_CLONE_URL'] = 'git@github.com:diversen/share.git';

$_INSTALL['MAIN_MENU_ITEM'] = array (
    'title' => 'share_main_menu_title',
    'url' => '/share/config/index',
    'module_name' => 'share',
    'parent' => 0,
    'weight' => 1,
    'auth' => 'admin',
    'admin_only' => 1,
    'section' => 'settings'
);
