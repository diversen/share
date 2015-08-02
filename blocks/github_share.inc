<?php

use diversen\moduleloader;
use diversen\view;

moduleloader::includeModule ('share');

function block_github_share () {
    view::includeModuleView('share', 'github_share', null);
}