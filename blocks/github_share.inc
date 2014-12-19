<?php

moduleloader::includeModule ('share');

function block_github_share () {
    view::includeModuleView('share', 'github_share', null);
}