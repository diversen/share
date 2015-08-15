<?php

use diversen\conf;
use diversen\lang;



if (!isset($vars['entity']['abstract'])) {
    $abstract = $vars['entity']['title'];
} else {
    $abstract = $vars['entity']['abstract'];
}

// url
$url = conf::getSchemeWithServerName();
$url.= $_SERVER['REQUEST_URI'];
//$url = rawurlencode($url);

$email_abstract = $abstract . "\n\n" . $url;

$subject = rawurlencode($vars['entity']['title']);
$abstract = rawurlencode($abstract);
$email_abstract = rawurlencode($email_abstract);
?>    
<?= lang::translate('Share ') ?> 
<a href="mailto:?subject=<?= $subject ?>&amp;body=<?= $email_abstract ?>">email</a>, 
<a href="https://plus.google.com/share?url=<?= $url ?>">Google+</a>,
<a href="http://twitter.com/share?url=<?= $url ?>&amp;text=<?= $abstract ?>">Twitter</a>,
<a href="http://www.facebook.com/sharer.php?u=<?= $url ?>&t=<?= $abstract ?>">Facebook</a>.
