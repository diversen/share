<?php

use diversen\moduleloader;
use diversen\view;

moduleloader::includeModule ('share');

function block_facebook_likebox () {
    view::includeModuleView('share', 'share_facebook_likebox', null);
}