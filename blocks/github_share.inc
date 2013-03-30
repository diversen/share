<?php

moduleloader::includeModel ('share');

function block_github_share () {
    view::includeModuleView('share', 'github_share', null);
}