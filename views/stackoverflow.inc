<?php

$url = config::getSchemeWithServerName();
$url.= $vars['return_url'];

$url = rawurlencode($url);
$subject = rawurlencode($vars['entity']['title']);
$abstract = rawurlencode($vars['entity']['abstract']);

if (empty($abstract)) {
    $abstract = $subject;
}

?>

            
            <?=lang::translate('share_stack_text')?> 
            <a href="mailto:?subject=<?=$subject?>&amp;body=<?=$abstract?>">email</a>, 
            <a href="https://plus.google.com/share?url=<?=$url?>">Google+</a>,
            <a href="http://twitter.com/share?url=<?=$url?>&amp;text=<?=$abstract?>">Twitter</a>,
            <a href="http://www.facebook.com/sharer.php?u=<?=$url?>&t=<?=$abstract?>">Facebook</a>.
