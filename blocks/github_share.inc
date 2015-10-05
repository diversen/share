<?php

use diversen\moduleloader;
use diversen\view;

moduleloader::includeModule ('share');

function block_github_share () {
    return view::get('share', 'github_share', null);
}